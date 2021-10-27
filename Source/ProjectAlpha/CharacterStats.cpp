// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStats.h"
#include "ItemObject.h"
#include "EquipableItem.h"

// Sets default values for this component's properties
UCharacterStats::UCharacterStats()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterStats::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCharacterStats::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCharacterStats::UpdateStats(class UEquipableItem* EquippedItem, bool IsEquipping)
{
	if (EquippedItem != nullptr)
	{
		CalculateAffectorToStats(EquippedItem, IsEquipping);

		Health += AddHealth;
		Stamina += AddStamina;
		AttackPower += AddAttackPower;
		SpellPower += AddSpellPower;
		CriticalRate += AddCriticalRate;
	}
}

void UCharacterStats::ResetStatsForUnEquipment(UEquipableItem* EquippedItem, bool IsEquipping)
{

}


void UCharacterStats::CalculateAffectorToStats(class UEquipableItem* EquippedItem, bool IsEquipping)
{
	IsEquipping ? AddHealth += EquippedItem->ItemAffector.Vitality * 0.5f : AddHealth -= (EquippedItem->ItemAffector.Vitality) * 0.5f;
	IsEquipping ? AddStamina += EquippedItem->ItemAffector.Endurance * 0.2f : AddStamina -= EquippedItem->ItemAffector.Endurance * 0.2f;
	IsEquipping ? AddAttackPower += EquippedItem->ItemAffector.Strength * 0.5f : AddAttackPower -= EquippedItem->ItemAffector.Strength * 0.5f;
	IsEquipping ? AddSpellPower += EquippedItem->ItemAffector.Intellect * 0.5f : AddSpellPower -= EquippedItem->ItemAffector.Intellect * 0.5f;
	IsEquipping ? AddCriticalRate += EquippedItem->ItemAffector.Luck * 0.1f : AddCriticalRate += EquippedItem->ItemAffector.Luck * 0.1f;
}

void UCharacterStats::GetStatsFromEquipment(UEquipableItem* EquippedItem, bool IsEquipping)
{

}

