// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Inventory.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryUpdated);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTALPHA_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventory();

	UPROPERTY(BlueprintAssignable, Category = "Inventory")
	FOnInventoryUpdated OnInventoryUpdated;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	int32 InventoryCapacity;

	UPROPERTY(EditDefaultsOnly, Instanced)
	TArray<class UItemObject*> DefaultItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	TArray<class UItemObject*> Items;

	UPROPERTY(EditAnywhere, BlueprintReadwrite, Category = "Items")
	TArray<class UItemObject*> Consumables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	TArray<class UItemObject*> Weapons;

	UFUNCTION(BlueprintCallable)
	bool AddItem(class UItemObject* Item);

	bool RemoveItem(class UItemObject* Item);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

};
