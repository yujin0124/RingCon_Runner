// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Camera/CameraComponent.h"
#include "WeaponActor.h"
#include "PlayerCharacterController.h"
#include "Inventory.h"
#include "ItemObject.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "SpawnedItem.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;
	WalkSpeed = 500.f;
	RunSpeed = 500.f;
	MovementLerpSpeed = 0.1f;


	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->MaxWalkSpeed = 170.f;
	GetCharacterMovement()->MaxAcceleration = 500.f;
	GetCharacterMovement()->JumpZVelocity = 300.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 450.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	//CameraBoom->SetRelativeRotation(FRotator(-15.f, 0.f, 0.f));

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	Inventory = CreateDefaultSubobject<UInventory>(TEXT("Inventory"));
}



// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	SetMovementStatus(EMovementStatus::EMS_Normal);

	PCController = Cast<APlayerCharacterController>(GetWorld()->GetFirstPlayerController());
}



// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	LerpMovementSpeed();
	CheckInteraction();
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &APlayerCharacter::ShiftKeyDown);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &APlayerCharacter::ShiftKeyUp);
	PlayerInputComponent->BindAction("ToggleMenu", IE_Released, this, &APlayerCharacter::ToggleMenu);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerCharacter::Interact);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	PlayerInputComponent->BindAxis("TurnRate", this, &APlayerCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APlayerCharacter::LookUpRate);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
}

void APlayerCharacter::SetMovementStatus(EMovementStatus NewStatus)
{
	MovementStatus = NewStatus;
}

void APlayerCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		if (!bIsLockOn)
		{
			// find out which way is forward
			const FRotator Rotation = Controller->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);
			// get forward vector
			const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

			AddMovementInput(Direction, Value);
			ShiftKeyDown();
		}
		else
		{
			FVector TargetDirection = LockOnTarget->GetActorLocation() - GetActorLocation();
			FRotator Rotation = UKismetMathLibrary::MakeRotFromX(TargetDirection);
			FVector Direction = UKismetMathLibrary::GetForwardVector(Rotation);
			AddMovementInput(Direction, Value);
		}
	}
}

void APlayerCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		if (!bIsLockOn)
		{
			//find out which way is right
			const FRotator Rotation = Controller->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);
			// get right vector 
			const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			// add movement in that direction
			
			AddMovementInput(Direction, Value);
		}
		else
		{
			FVector TargetDirection = LockOnTarget->GetActorLocation() - GetActorLocation();
			FRotator Rotation = UKismetMathLibrary::MakeRotFromX(TargetDirection);
			FVector Direction = UKismetMathLibrary::GetRightVector(Rotation);
			AddMovementInput(Direction, Value);
		}
	}
}

void APlayerCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::LookUpRate(float Rate)
{
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void APlayerCharacter::Jump()
{
	Super::Jump();
}

void APlayerCharacter::LerpMovementSpeed()
{
	CurrentMovementSpeed = GetVelocity().Size();

	switch (MovementStatus)
	{
	case EMovementStatus::EMS_Normal:
		GetCharacterMovement()->MaxWalkSpeed = UKismetMathLibrary::Lerp(CurrentMovementSpeed, WalkSpeed, MovementLerpSpeed);
		GetCharacterMovement()->MaxAcceleration = 500.f;
		break;
	case EMovementStatus::EMS_Sprinting:
		GetCharacterMovement()->MaxWalkSpeed = UKismetMathLibrary::Lerp(CurrentMovementSpeed, RunSpeed, MovementLerpSpeed);
		break;
	case EMovementStatus::EMS_Dead:
		GetCharacterMovement()->MaxWalkSpeed = UKismetMathLibrary::Lerp(CurrentMovementSpeed, 0, MovementLerpSpeed);
		break;
	default:
		break;
	}
}

void APlayerCharacter::ShiftKeyDown()
{
	if (MovementStatus == EMovementStatus::EMS_Dead) { return; }
	bIsSprinting = true;
	SetMovementStatus(EMovementStatus::EMS_Sprinting);
}

void APlayerCharacter::ShiftKeyUp()
{
	if (MovementStatus == EMovementStatus::EMS_Dead) { return; }
	bIsSprinting = false;

	SetMovementStatus(EMovementStatus::EMS_Normal);
}

void APlayerCharacter::LeftMouseDown()
{

}

void APlayerCharacter::LeftMouseUp()
{

}

void APlayerCharacter::RightMouseDown()
{

}

void APlayerCharacter::RightMouseUp()
{

}

void APlayerCharacter::EquipWeapon(class AWeaponActor* Weapon)
{
	const USkeletalMeshSocket* RightHandSocket = GetMesh()->GetSocketByName("RightHandWeaponSocket");
	if (RightHandSocket)
	{
		EquippedWeapon = Weapon;
		RightHandSocket->AttachActor(EquippedWeapon, GetMesh());
		UE_LOG(LogTemp, Warning, TEXT("Equipped Weapon..."));
	}
}

bool APlayerCharacter::UseItem(class UItemObject* Item)
{
	if (Item)
	{
		if (Item->Use(this) == true)
		{
			UE_LOG(LogTemp, Warning, TEXT("Success to Use Item"));
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to Use Item"));
			return false;
		}
	}
	else
	{
		return false;
	}
}

void APlayerCharacter::ToggleMenu()
{
	if (PCController == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("No PlayerController"));
	}
	if (PCController != nullptr)
	{
		if (PCController->GetWidgetState() == EWidgetState::EWS_Ingame)
		{
			PCController->ChangeWidgetState(EWidgetState::EWS_Menu);
		}
		else if (PCController->GetWidgetState() == EWidgetState::EWS_Menu)
		{
			PCController->ChangeWidgetState(EWidgetState::EWS_Ingame);
		}
	}
}

void APlayerCharacter::CheckInteraction()
{
	TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
	ObjectTypes.Add(EObjectTypeQuery::ObjectTypeQuery7);

	TArray<AActor*> IgnoreActors;
	FHitResult HitResult;
	bool bIsHit = UKismetSystemLibrary::BoxTraceSingleForObjects(GetWorld(), GetActorLocation(), GetActorLocation() + (GetActorForwardVector() * 10), FVector(50.f, 50.f, 100.f), FRotator(0.f), 
													ObjectTypes, false, IgnoreActors, EDrawDebugTrace::ForOneFrame, HitResult, true, FLinearColor::Red, FLinearColor::Green, 1.f);
	if (bIsHit)
	{
		if (HitResult.GetActor()->GetClass()->IsChildOf(ASpawnedItem::StaticClass()))
		{
			InteractedItem = Cast<ASpawnedItem>(HitResult.GetActor());
			//Delegate to UI. show text "Press E to interact"
		}
	}
}

void APlayerCharacter::Interact()
{
	if (InteractedItem != nullptr)
	{
		Inventory->AddItem(InteractedItem->ItemToSpawn);
		InteractedItem->Destroy();
		InteractedItem = nullptr;
	}
}