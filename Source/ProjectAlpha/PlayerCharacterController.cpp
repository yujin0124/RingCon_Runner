// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterController.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

EWidgetState APlayerCharacterController::GetWidgetState()
{
	return WidgetState;
}

void APlayerCharacterController::ChangeWidgetState(EWidgetState NewState)
{
	WidgetState = NewState;
	ApplyWidgetChange();
}

bool APlayerCharacterController::ApplyWidget(TSubclassOf<class UUserWidget> WidgetToApply, bool MouseCursorVisiblity, bool	EnableClickEvents)
{
	//AInventoryTestCharacter* MainCharacter = Cast<AInventoryTestCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));

	if (WidgetToApply != nullptr)
	{
		// Set MouseCursor Visibility & ClickEvent according to Params
		bShowMouseCursor = MouseCursorVisiblity;
		bEnableClickEvents = EnableClickEvents;

		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetToApply);

		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
			return true;
		}
		// No CurrentWidget 
		else return false;
	}
	// No Widget To Apply
	else return false;
}




void APlayerCharacterController::BeginPlay()
{
	ApplyWidget(IngameWidget, false, false);

	WidgetState = EWidgetState::EWS_Ingame;


}

void APlayerCharacterController::ApplyWidgetChange()
{
	// Remove the previous Hud
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromParent(); // could use RemoveFromViewport?
		OnWidgetUpdated.Broadcast();
	}
	switch (WidgetState)
	{
		// General Ingame State
	case EWidgetState::EWS_Ingame:
	{
		ApplyWidget(IngameWidget, false, false);
		SetInputMode(FInputModeGameOnly());
		break;
	}
	// Menu State
	case EWidgetState::EWS_Menu:
	{
		ApplyWidget(MenuWidget, true, true); // Enable MouseVisibility & ClickEvent
		SetInputMode(FInputModeGameAndUI());
		break;
	}
	// Default State
	case EWidgetState::EWS_MAX:
	{
		ApplyWidget(IngameWidget, false, false);
		SetInputMode(FInputModeGameOnly());
		break;
	}
	}
}