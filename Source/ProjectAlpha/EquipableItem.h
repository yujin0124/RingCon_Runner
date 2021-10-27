// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemObject.h"
#include "EquipableItem.generated.h"



UCLASS()
class PROJECTALPHA_API UEquipableItem : public UItemObject
{
	GENERATED_BODY()

public:

	virtual bool Use(class APlayerCharacter* Character) override;

};
