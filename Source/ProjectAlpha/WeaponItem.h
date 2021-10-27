// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EquipableItem.h"
#include "WeaponItem.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_Katana		UMETA(DisplayName = "Katana")
};

UCLASS()
class PROJECTALPHA_API UWeaponItem : public UEquipableItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWeaponType WeaponType;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class AWeaponActor* WeaponToEquip;

	// Reference path to the Weapon Blueprint... *IMPORTANT* must add '_C' at the end of the reference path  
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName Path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MontagePath;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UAnimMontage* WeaponMontage;

	void LoadMontage();

	virtual bool Use(class APlayerCharacter* Character) override;
	
};
