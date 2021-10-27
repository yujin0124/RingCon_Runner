// Copyright Epic Games, Inc. All Rights Reserved.

#include "JoyConPluginBPLibrary.h"

#include "JoyConPlugin.h"
#include "Features/IModularFeatures.h"


void UJoyConPluginBPLibrary::ResumeJoyConConnection(bool& Success) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().ResumeJoyConConnection();
		break;
	}
}

void UJoyConPluginBPLibrary::ConnectJoyCon(const FJoyConInformation JoyConInformation, const bool UseImu, const bool UseLocalize, bool& Success, int& ControllerId, const float Alpha) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().ConnectJoyCon(JoyConInformation, UseImu, UseLocalize, Alpha, ControllerId);
		break;
	}
}

void UJoyConPluginBPLibrary::AttachJoyCon(const int ControllerId, const int GripIndex, bool& Success) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().AttachJoyCon(ControllerId, GripIndex);
		break;
	}
}

void UJoyConPluginBPLibrary::DisconnectJoyCon(const int ControllerId, bool& Success) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().DisconnectJoyCon(ControllerId);
		break;
	}
}

void UJoyConPluginBPLibrary::DetachJoyCon(const int ControllerId, bool& Success) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().DetachJoyCon(ControllerId);
		break;
	}
}

void UJoyConPluginBPLibrary::SearchForJoyCons(TArray<FJoyConInformation>& JoyCons) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		TArray<FJoyConInformation>* Data = JoyConInputApi->Get().SearchForJoyCons();
		if (Data == nullptr) {
			JoyCons = TArray<FJoyConInformation>();
			break;
		}
		const TArray<FJoyConInformation> ArrayFrom = *Data;
		JoyCons = ArrayFrom;
		break;
	}
}

void UJoyConPluginBPLibrary::GetAttachedJoyCons(TArray<FJoyConInformation>& JoyCons) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	JoyCons = TArray<FJoyConInformation>();
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		TArray<FJoyConInformation>* Data = JoyConInputApi->Get().GetAttachedJoyCons();
		if (Data == nullptr) {
			JoyCons = TArray<FJoyConInformation>();
			break;
		}
		const TArray<FJoyConInformation> ArrayFrom = *Data;
		JoyCons = ArrayFrom;
		break;
	}
}

void UJoyConPluginBPLibrary::GetConnectedJoyCons(TArray<FJoyConInformation>& JoyCons) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	JoyCons = TArray<FJoyConInformation>();
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		TArray<FJoyConInformation>* Data = JoyConInputApi->Get().GetConnectedJoyCons();
		if (Data == nullptr) {
			JoyCons = TArray<FJoyConInformation>();
			break;
		}
		const TArray<FJoyConInformation> ArrayFrom = *Data;
		JoyCons = ArrayFrom;
		break;
	}
}

void UJoyConPluginBPLibrary::GetJoyConAccelerometer(const int ControllerId, bool& Success, FVector& Accelerometer) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	Accelerometer = FVector::ZeroVector;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().GetJoyConAccelerometer(ControllerId, Accelerometer);
		break;
	}
}

void UJoyConPluginBPLibrary::GetJoyConGyroscope(const int ControllerId, bool& Success, FVector& Gyroscope) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	Gyroscope = FVector::ZeroVector;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().GetJoyConGyroscope(ControllerId, Gyroscope);
		break;
	}
}

void UJoyConPluginBPLibrary::GetJoyConVector(const int ControllerId, bool& Success, FRotator& Vector) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false; 
	Vector = FRotator::ZeroRotator;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().GetJoyConVector(ControllerId, Vector);
		break;
	}
}

void UJoyConPluginBPLibrary::ReCenterJoyCon(const int ControllerId, bool& Success) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().ReCenterJoyCon(ControllerId);
		break;
	}
}

void UJoyConPluginBPLibrary::SetJoyConFilterCoefficient(const int ControllerId, const float Coefficient, bool& Success) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().SetJoyConFilterCoefficient(ControllerId, Coefficient);
		break;
	}
}

void UJoyConPluginBPLibrary::SetJoyConGripMode(const int GripIndex, const EGripMode GripMode, bool& Success) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().SetJoyConGripMode(GripIndex, static_cast<uint8>(GripMode));
		break;
	}
}

void UJoyConPluginBPLibrary::SetJoyConRumble(const int ControllerId, const float LowFrequency, const float HighFrequency, const float Amplitude, const int Time, bool& Success) {
	TArray<FJoyConPluginModule*> JoyConInputApis = IModularFeatures::Get().GetModularFeatureImplementations<FJoyConPluginModule>(FJoyConPluginModule::GetModularFeatureName());
	Success = false;
	for (FJoyConPluginModule* JoyConInputApi : JoyConInputApis) {
		if (JoyConInputApi == nullptr) continue;
		Success = JoyConInputApi->Get().SetJoyConRumble(ControllerId, LowFrequency, HighFrequency, Amplitude, Time);
		break;
	}
}

