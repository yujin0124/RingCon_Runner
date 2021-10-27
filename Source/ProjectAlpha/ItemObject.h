// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemObject.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	EIT_Consumable			UMETA(DisplayName = "Consumable"),
	EIT_Weapon				UMETA(DisplayName = "Weapon"),
	EIT_Relic				UMETA(DisplayName = "Relic")
};

UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	EIR_Normal				UMETA(DisplayName = "Noraml"),
	EIR_Rare				UMETA(DisplayName = "Rare"),
	EIR_Epic				UMETA(DisplayName = "Epic"),
	EIR_Legendary			UMETA(DisplayName = "Legendary"),
};

USTRUCT(BlueprintType)
struct FItemAffector
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Vitality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Endurance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Intellect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Luck;
};

UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class PROJECTALPHA_API UItemObject : public UObject
{
	GENERATED_BODY()

public:

	UItemObject();



	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemAffector ItemAffector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCharacterStats* CharacterStat;

	virtual class UWorld* GetWorld() const { return World; }

	UPROPERTY(Transient)
	class UWorld* World;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	EItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	EItemRarity EItemRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	class UStaticMesh* PickUpMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	class UTexture2D* ItemThumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FText ItemDisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Item")
	FText ItemDescription;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	int32 ItemNumber;

	/* The Amount of Item */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Item")
	int32 ItemQuantity;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	int32 ItemMaxQuantity;

	virtual bool Use(class APlayerCharacter* Character);

	UPROPERTY()
	class UInventory* OwningInventory;

};
