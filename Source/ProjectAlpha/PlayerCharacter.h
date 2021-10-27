// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.h"
#include "PlayerCharacter.generated.h"


UENUM(BlueprintType)
enum class EMovementStatus : uint8
{
	EMS_Normal					UMETA(DisplayName = "Normal"),
	EMS_Sprinting				UMETA(DisplayName = "Sprinting"),
	EMS_Dead					UMETA(DisplaayName = "Dead")
};


UCLASS()
class PROJECTALPHA_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EMovementStatus MovementStatus;

	UFUNCTION(BlueprintCallable)
	void SetMovementStatus(EMovementStatus NewStatus);


	float BaseTurnRate;

	float BaseLookUpRate;

	UFUNCTION(BlueprintCallable)
	void MoveForward(float Value);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Called for forwards/backward input */
	

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpRate(float Rate);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class APlayerCharacterController* PCController;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Inventory", meta = (AllowPrivateAccess = "true"))
	class UInventory* Inventory;

	virtual void Jump() override;

	void LerpMovementSpeed();

	void ShiftKeyDown();

	void ShiftKeyUp();

	bool bIsSprinting;

	float MovementLerpSpeed;

	float CurrentMovementSpeed;

	float WalkSpeed;

	float RunSpeed;

	void LeftMouseDown();

	void LeftMouseUp();

	void RightMouseDown();

	void RightMouseUp();

	void LockOn();
	
	bool bIsLockOn;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	TArray<AEnemy*> EnemyArray;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	AEnemy* LockOnTarget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	class AWeaponActor* EquippedWeapon;

	void EquipWeapon(class AWeaponActor* Weapon);

	UFUNCTION(BlueprintCallable, Category = "Item")
	bool UseItem(class UItemObject* Item);

	void ToggleMenu();

	void CheckInteraction();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class ASpawnedItem* InteractedItem;

	void Interact();


	FORCEINLINE bool GetLockOnState() { return bIsLockOn; }

};
