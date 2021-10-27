// Copyright Epic Games, Inc. All Rights Reserved.

#include "JoyConPlugin.h"
#include "JoyConInput.h"

#define LOCTEXT_NAMESPACE "JoyConPlugin"

void FJoyConPluginModule::StartupModule() {
	IInputDeviceModule::StartupModule();
	FJoyConInput::PreInit();
}

TArray<FJoyConInformation>* FJoyConPluginModule::SearchForJoyCons() const {
	return JoyConInputDevice.Pin()->SearchJoyCons();
}

TArray<FJoyConInformation>* FJoyConPluginModule::GetAttachedJoyCons() const {
	return JoyConInputDevice.Pin()->GetAttachedJoyCons();
}

TArray<FJoyConInformation>* FJoyConPluginModule::GetConnectedJoyCons() const {
	return JoyConInputDevice.Pin()->GetConnectedJoyCons();
}

bool FJoyConPluginModule::ResumeJoyConConnection() const {
	return JoyConInputDevice.Pin()->ResumeJoyConConnection();
}

bool FJoyConPluginModule::ConnectJoyCon(const FJoyConInformation JoyConInformation, const bool UseImu, const bool UseLocalize, const float Alpha, int& ControllerId) const {
	return JoyConInputDevice.Pin()->ConnectJoyCon(JoyConInformation, UseImu, UseLocalize, Alpha, ControllerId);
}

bool FJoyConPluginModule::AttachJoyCon(const int ControllerId, const int GripIndex) const {
	return JoyConInputDevice.Pin()->AttachJoyCon(ControllerId, GripIndex);
}

bool FJoyConPluginModule::DisconnectJoyCon(const int ControllerId) const {
	return JoyConInputDevice.Pin()->DisconnectJoyCon(ControllerId);
}

bool FJoyConPluginModule::DetachJoyCon(const int ControllerId) const {
	return JoyConInputDevice.Pin()->DetachJoyCon(ControllerId);
}

bool FJoyConPluginModule::GetJoyConAccelerometer(const int ControllerId, FVector& Out) const {
	return JoyConInputDevice.Pin()->GetJoyConAccelerometer(ControllerId, Out);
}

bool FJoyConPluginModule::GetJoyConGyroscope(const int ControllerId, FVector& Out) const {
	return JoyConInputDevice.Pin()->GetJoyConGyroscope(ControllerId, Out);
}

bool FJoyConPluginModule::GetJoyConVector(const int ControllerId, FRotator& Out) const {
	return JoyConInputDevice.Pin()->GetJoyConVector(ControllerId, Out);
}

bool FJoyConPluginModule::ReCenterJoyCon(const int ControllerId) const {
	return JoyConInputDevice.Pin()->ReCenterJoyCon(ControllerId);
}

bool FJoyConPluginModule::SetJoyConFilterCoefficient(const int ControllerId, const float Coefficient) const {
	return JoyConInputDevice.Pin()->SetJoyConFilterCoefficient(ControllerId, Coefficient);
}

bool FJoyConPluginModule::SetJoyConGripMode(const int GripIndex, const uint8 GripMode) const {
	return JoyConInputDevice.Pin()->SetJoyConGripMode(GripIndex, static_cast<EGripMode>(GripMode));
}

bool FJoyConPluginModule::SetJoyConRumble(const int ControllerId, const float LowFrequency, const float HighFrequency, const float Amplitude, const int Time) const {
	return JoyConInputDevice.Pin()->SetJoyConRumble(ControllerId, LowFrequency, HighFrequency, Amplitude, Time);
}

TSharedPtr<class IInputDevice> FJoyConPluginModule::CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) {
	TSharedPtr<FJoyConInput> InputDevice(new FJoyConInput(InMessageHandler));
	JoyConInputDevice = InputDevice;
	return InputDevice;
}

IMPLEMENT_MODULE(FJoyConPluginModule, JoyConPlugin)
#undef LOCTEXT_NAMESPACE
	

