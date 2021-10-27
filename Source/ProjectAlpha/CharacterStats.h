// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterStats.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTALPHA_API UCharacterStats : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterStats();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Stamina;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpellPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CriticalRate;

	float AddHealth;
	float AddStamina;
	float AddAttackPower;
	float AddSpellPower;
	float AddCriticalRate;

	float ItemVitality;
	float ItemStrength;
	float ItemEndurance;
	float ItemIntellect;
	float ItemLuck;


	void CalculateAffectorToStats(class UEquipableItem* EquippedItem, bool IsEqupping);

	void GetStatsFromEquipment(class UEquipableItem* EquippedItem, bool IsEquipping);

	void UpdateStats(class UEquipableItem* EquippedItem, bool IsEquipping);

	void ResetStatsForUnEquipment(class UEquipableItem* EquippedItem, bool IsEquipping);

};
