// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerCharacterController.generated.h"

UENUM(BlueprintType)
enum class EWidgetState : uint8
{
	EWS_Ingame				UMETA(DisplayName = "Ingame"),
	EWS_Menu				UMETA(DisplayName = "Menu"),
	EWS_MAX					UMETA(DisplayName = "Default")
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWidgetUpdated);

UCLASS()
class PROJECTALPHA_API APlayerCharacterController : public APlayerController
{
	GENERATED_BODY()

public:

	/* Getter function for HUD State */
	EWidgetState GetWidgetState();

	/* Setter function for New HUD State change*/
	UFUNCTION(BlueprintCallable, Category = "HUD Function")
	void ChangeWidgetState(EWidgetState NewState);

	/* Applies HUD to screen */
	UFUNCTION(BlueprintCallable)
	bool ApplyWidget(TSubclassOf<class UUserWidget> WidgetToApply, bool MouseCursorVisiblity, bool	EnableClickEvents);

	/* Checks HUD State and calls ApplyHUD function */
	void ApplyWidgetChange();

	UPROPERTY(BlueprintAssignable)
	FOnWidgetUpdated OnWidgetUpdated;

protected:

	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EWidgetState WidgetState;

public:

	/* General HUD to be shown Ingame */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget>	IngameWidget;

	/* HUd to be shown when pressed Menu */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget>	MenuWidget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget>	W_Item;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget>	W_InventoryGrid;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget>	W_SingleTabbedMenu;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget>	W_TabbedMenu;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget>	W_SingleSubTabbedMenu;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget>	W_SubTabbedMenu;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget>	W_Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widgets")
	class UUserWidget* CurrentWidget;

};