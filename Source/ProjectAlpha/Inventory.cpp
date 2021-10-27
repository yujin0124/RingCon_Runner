// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"
#include "ItemObject.h"

// Sets default values for this component's properties
UInventory::UInventory()
{
	InventoryCapacity = 20;
}

void UInventory::BeginPlay()
{
	Super::BeginPlay();

	if (DefaultItems.Num() > 0)
	{
		for (auto& Item : DefaultItems)
		{
			AddItem(Item);
			UE_LOG(LogTemp, Warning, TEXT("Item Added."));
		}
	}
}



bool UInventory::AddItem(UItemObject* Item)
{
	if (Items.Num() >= InventoryCapacity || !Item) { return false; }
	
	Item->OwningInventory = this;
	Item->World = GetWorld();
	switch (Item->ItemType)
	{
		case EItemType::EIT_Weapon :
		{
			Weapons.Add(Item);
			OnInventoryUpdated.Broadcast();
		
			return true;
			break;
		}
		case EItemType::EIT_Consumable:
		{
			for (int32 i = 0; i < Consumables.Num(); i++)
			{
				if (Consumables[i]->ItemNumber == Item->ItemNumber)
				{
					Consumables[i]->ItemQuantity++;
					OnInventoryUpdated.Broadcast();
					return true;
					break;
				}
			}
			Consumables.Add(Item);
			OnInventoryUpdated.Broadcast();

			return true;
			break;
		}
	}
	return false;
}

bool UInventory::RemoveItem(UItemObject* Item)
{
	if (Item == nullptr) { return false; }

	if (Item->ItemType == EItemType::EIT_Consumable)
	{
		if (Item->ItemQuantity > 1)
		{
			Item->ItemQuantity--;
			return false;
		}
		else
		{
			Item->OwningInventory = nullptr;
			Item->World = nullptr;
			Consumables.RemoveSingle(Item);
			OnInventoryUpdated.Broadcast();
			return true;
		}
	}
	else
	{
		return false;
	}
}
