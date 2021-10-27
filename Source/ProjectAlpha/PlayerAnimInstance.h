// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTALPHA_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeInitializeAnimation() override;


	UFUNCTION(BlueprintCallable)
	void UpdateProperties(float DeltaTime);

	void HandleMovementProductValue();

	void HandleForwardSpeedValue();

	void HandleRightSpeedValue();

	void HandlePlayerRotation(float DeltaTime);

	void HandleOrientRotationToMovement(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class APawn* Pawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	class APlayerCharacter* MainPlayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsInAir;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float ForwardSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float RightSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float MovementProductValue;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FRotator HeadRotation;
	
	UFUNCTION(BlueprintCallable)
	void HandleHeadRotation(float DeltaTime);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool bIsAccelerating;

	void FigureIfPlayerAccelerating();

	FVector DesiredDirection;
};
