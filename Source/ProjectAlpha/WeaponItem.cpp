// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponItem.h"
#include "PlayerCharacter.h"
#include "CharacterStats.h"
#include "Animation/AnimMontage.h"
#include "WeaponActor.h"

bool UWeaponItem::Use(class APlayerCharacter* Character)
{
	if (Character)
	{
		if (Character->EquippedWeapon)
		{
			Character->EquippedWeapon->Destroy();
			Character->EquippedWeapon = nullptr;
			UE_LOG(LogTemp, Warning, TEXT("Removed Equipped Weapon..."));
			return true;
		}
		// Prepare SpawnActor params
		FActorSpawnParameters SpawnParams;
		FVector SpawnLocation = Character->GetActorLocation();
		FRotator SpawnRotation = Character->GetActorRotation();

		// Check for BlueprintClass Reference Path... If failed, return
		if (Path == NAME_None)
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to Reference Weapon Path"));
			return false;
		}
		
		if (MontagePath == NAME_None)
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to Reference Montage Path"));
			return false;
		}

		WeaponMontage = Cast<UAnimMontage>(StaticLoadObject(UClass::StaticClass(), NULL, *MontagePath.ToString()));


		//Spawn Blueprint Weapon Actor
		UClass* ReferenceBP = Cast<UClass>(StaticLoadObject(UClass::StaticClass(), NULL, *Path.ToString()));
		WeaponToEquip = GetWorld()->SpawnActor<AWeaponActor>(ReferenceBP, SpawnLocation, SpawnRotation, SpawnParams);
		UE_LOG(LogTemp, Warning, TEXT("Spawn Weapon..."));
		// Attach Spawned Actor to Player SkeletalSocket...
		Character->EquipWeapon(WeaponToEquip);
		return true;
	}
	return false;	
}

void UWeaponItem::LoadMontage()
{
	
}