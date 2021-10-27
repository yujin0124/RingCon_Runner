// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "JoyConGrip.h"
#include "JoyConInformation.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JoyConPluginBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UJoyConPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Resume Connection"))
		static void ResumeJoyConConnection(bool& Success);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Connect"))
		static void ConnectJoyCon(FJoyConInformation JoyConInformation, bool UseImu, bool UseLocalize, bool& Success, int& ControllerIndex, float Alpha = 0.05f);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Attach"))
		static void AttachJoyCon(int ControllerId, int GripIndex, bool& Success);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Disconnect"))
		static void DisconnectJoyCon(int ControllerId, bool& Success);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Detach"))
		static void DetachJoyCon(int ControllerId, bool& Success);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Search"))
		static void SearchForJoyCons(TArray<FJoyConInformation>& JoyCons);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Get Attached"))
		static void GetAttachedJoyCons(TArray<FJoyConInformation>& JoyCons);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Get Attached"))
		static void GetConnectedJoyCons(TArray<FJoyConInformation>& JoyCons);

	UFUNCTION(BlueprintPure, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Accelerometer"))
		static void GetJoyConAccelerometer(int ControllerId, bool& Success, FVector& Accelerometer);

	UFUNCTION(BlueprintPure, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Gyroscope"))
		static void GetJoyConGyroscope(int ControllerId, bool& Success, FVector& Gyroscope);

	UFUNCTION(BlueprintPure, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons IMU Vector"))
		static void GetJoyConVector(int ControllerId, bool& Success, FRotator& Vector);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons ReCenter IMU"))
		static void ReCenterJoyCon(int ControllerId, bool& Success);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Set Filter Coefficient"))
		static void SetJoyConFilterCoefficient(int ControllerId, float Coefficient, bool& Success);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Recenter IMU"))
		static void SetJoyConGripMode(int GripIndex, EGripMode GripMode, bool& Success);

	UFUNCTION(BlueprintCallable, Category = "JoyCon", meta = (Keywords = "Nintendo Switch Joy Con Cons JoyCon JoyCons Recenter IMU"))
		static void SetJoyConRumble(int ControllerId, float LowFrequency, float HighFrequency, float Amplitude, int Time, bool& Success);
};
