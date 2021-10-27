// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerAnimInstance.h"
#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"


void UPlayerAnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			MainPlayer = Cast<APlayerCharacter>(Pawn);
		}
		MovementProductValue = 1.f;
	}
}

void UPlayerAnimInstance::UpdateProperties(float DeltaTime)
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
	}
	if (Pawn)
	{
		DesiredDirection = MainPlayer->GetCharacterMovement()->GetCurrentAcceleration();
		DesiredDirection = DesiredDirection.GetSafeNormal();

		HandleHeadRotation(DeltaTime);
		FigureIfPlayerAccelerating();
		HandleMovementProductValue();
		bIsInAir = MainPlayer->GetMovementComponent()->IsFalling();
		if (bIsInAir)
		{
			MainPlayer->GetCharacterMovement()->bOrientRotationToMovement = false;
		}
		else if (!bIsInAir)
		{
			MainPlayer->GetCharacterMovement()->bOrientRotationToMovement = true;
		}
		if (MainPlayer->GetLockOnState())
		{
			HandleForwardSpeedValue();
			HandleRightSpeedValue();
			HandleOrientRotationToMovement(DeltaTime);
		}
		else if (MainPlayer->GetLockOnState() == false)
		{
			//MainPlayer->GetCharacterMovement()->bOrientRotationToMovement = true;
			HandleForwardSpeedValue();
			RightSpeed = 0.f; // Reset RightSpeed Value... 
		}
	}
}

void UPlayerAnimInstance::HandleMovementProductValue()
{
	if (MainPlayer->MovementStatus == EMovementStatus::EMS_Normal)
	{
		MovementProductValue = 1.f;
	}
	else if (MainPlayer->MovementStatus == EMovementStatus::EMS_Sprinting)
	{
		MovementProductValue = 2.f;
	}
}

void UPlayerAnimInstance::HandleForwardSpeedValue()
{
	ForwardSpeed = UKismetMathLibrary::Lerp(ForwardSpeed, FVector::DotProduct(DesiredDirection * MovementProductValue, MainPlayer->GetActorForwardVector()), 0.1f);
}

void UPlayerAnimInstance::HandleRightSpeedValue()
{
	RightSpeed = UKismetMathLibrary::Lerp(RightSpeed, FVector::DotProduct(DesiredDirection * MovementProductValue, MainPlayer->GetActorRightVector()), 0.1f);
}

void UPlayerAnimInstance::HandlePlayerRotation(float DeltaTime)
{
	
	FVector PlayerLocation = MainPlayer->GetActorLocation();
	PlayerLocation = FVector(PlayerLocation.X, PlayerLocation.Y, 0.f);

	FVector LockOnTargetLocation = MainPlayer->LockOnTarget->GetActorLocation();
	LockOnTargetLocation = FVector(LockOnTargetLocation.X, LockOnTargetLocation.Y, 0.f);

	FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(PlayerLocation, LockOnTargetLocation);

	MainPlayer->SetActorRotation(UKismetMathLibrary::RInterpTo(MainPlayer->GetActorRotation(), TargetRotation, DeltaTime, 5.f));
		
	}

void UPlayerAnimInstance::HandleOrientRotationToMovement(float DeltaTime)
{
	if (MainPlayer->MovementStatus == EMovementStatus::EMS_Normal)
	{
		MainPlayer->GetCharacterMovement()->bOrientRotationToMovement = false;
		HandlePlayerRotation(DeltaTime);
	}
	else if (MainPlayer->MovementStatus == EMovementStatus::EMS_Sprinting)
	{
		MainPlayer->GetCharacterMovement()->bOrientRotationToMovement = true;
	}
}

void UPlayerAnimInstance::HandleHeadRotation(float DeltaTime)
{
	if (MainPlayer->GetLockOnState())
	{
		
		FVector PlayerFVector = MainPlayer->GetActorForwardVector();
		FRotator TargetRotation = UKismetMathLibrary::FindLookAtRotation(MainPlayer->GetMesh()->GetSocketLocation("HeadSocket"), MainPlayer->LockOnTarget->GetActorLocation());
		FRotator NewRotation = FRotator(0.f, TargetRotation.Yaw - MainPlayer->GetActorRotation().Yaw, 0.f);


		FVector HeadFVector = UKismetMathLibrary::GetForwardVector(TargetRotation);
		HeadFVector = HeadFVector.GetSafeNormal();

		float DotProduct = FVector::DotProduct(HeadFVector, PlayerFVector);
		float ArcCosine = FMath::Acos(DotProduct);
		float TargetAngle = FMath::RadiansToDegrees(ArcCosine);

		if (TargetAngle < 85 && TargetAngle > -85)
		{
			HeadRotation = UKismetMathLibrary::RInterpTo(HeadRotation, NewRotation, DeltaTime, 10.f);
		}
		
	}
	else
	{
		HeadRotation = FRotator(0.f, 0.f, 0.f);
	}
}

void UPlayerAnimInstance::FigureIfPlayerAccelerating()
{
	if (DesiredDirection.Size() > 0)
	{
		bIsAccelerating = true;
	}
	else
	{
		bIsAccelerating = false;
	}
}