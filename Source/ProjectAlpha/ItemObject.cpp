// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemObject.h"
#include "PlayerCharacter.h"
#include "CharacterStats.h"


UItemObject::UItemObject()
{
	ItemDisplayName = FText::FromString("Item");
}

bool UItemObject::Use(class APlayerCharacter* Character)
{
	return true;
}
