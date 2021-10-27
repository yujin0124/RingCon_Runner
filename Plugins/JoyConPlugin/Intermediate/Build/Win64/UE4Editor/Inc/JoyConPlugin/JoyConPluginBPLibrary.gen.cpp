// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoyConPlugin/Public/JoyConPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyConPluginBPLibrary() {}
// Cross Module References
	JOYCONPLUGIN_API UClass* Z_Construct_UClass_UJoyConPluginBPLibrary_NoRegister();
	JOYCONPLUGIN_API UClass* Z_Construct_UClass_UJoyConPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_JoyConPlugin();
	JOYCONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoyConInformation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	JOYCONPLUGIN_API UEnum* Z_Construct_UEnum_JoyConPlugin_EGripMode();
// End Cross Module References
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execSetJoyConRumble)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LowFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HighFrequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amplitude);
		P_GET_PROPERTY(FIntProperty,Z_Param_Time);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::SetJoyConRumble(Z_Param_ControllerId,Z_Param_LowFrequency,Z_Param_HighFrequency,Z_Param_Amplitude,Z_Param_Time,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execSetJoyConGripMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_GripIndex);
		P_GET_ENUM(EGripMode,Z_Param_GripMode);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::SetJoyConGripMode(Z_Param_GripIndex,EGripMode(Z_Param_GripMode),Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execSetJoyConFilterCoefficient)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Coefficient);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::SetJoyConFilterCoefficient(Z_Param_ControllerId,Z_Param_Coefficient,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execReCenterJoyCon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::ReCenterJoyCon(Z_Param_ControllerId,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execGetJoyConVector)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::GetJoyConVector(Z_Param_ControllerId,Z_Param_Out_Success,Z_Param_Out_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execGetJoyConGyroscope)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Gyroscope);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::GetJoyConGyroscope(Z_Param_ControllerId,Z_Param_Out_Success,Z_Param_Out_Gyroscope);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execGetJoyConAccelerometer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Accelerometer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::GetJoyConAccelerometer(Z_Param_ControllerId,Z_Param_Out_Success,Z_Param_Out_Accelerometer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execGetConnectedJoyCons)
	{
		P_GET_TARRAY_REF(FJoyConInformation,Z_Param_Out_JoyCons);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::GetConnectedJoyCons(Z_Param_Out_JoyCons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execGetAttachedJoyCons)
	{
		P_GET_TARRAY_REF(FJoyConInformation,Z_Param_Out_JoyCons);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::GetAttachedJoyCons(Z_Param_Out_JoyCons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execSearchForJoyCons)
	{
		P_GET_TARRAY_REF(FJoyConInformation,Z_Param_Out_JoyCons);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::SearchForJoyCons(Z_Param_Out_JoyCons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execDetachJoyCon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::DetachJoyCon(Z_Param_ControllerId,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execDisconnectJoyCon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::DisconnectJoyCon(Z_Param_ControllerId,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execAttachJoyCon)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
		P_GET_PROPERTY(FIntProperty,Z_Param_GripIndex);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::AttachJoyCon(Z_Param_ControllerId,Z_Param_GripIndex,Z_Param_Out_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execConnectJoyCon)
	{
		P_GET_STRUCT(FJoyConInformation,Z_Param_JoyConInformation);
		P_GET_UBOOL(Z_Param_UseImu);
		P_GET_UBOOL(Z_Param_UseLocalize);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_ControllerIndex);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::ConnectJoyCon(Z_Param_JoyConInformation,Z_Param_UseImu,Z_Param_UseLocalize,Z_Param_Out_Success,Z_Param_Out_ControllerIndex,Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJoyConPluginBPLibrary::execResumeJoyConConnection)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJoyConPluginBPLibrary::ResumeJoyConConnection(Z_Param_Out_Success);
		P_NATIVE_END;
	}
	void UJoyConPluginBPLibrary::StaticRegisterNativesUJoyConPluginBPLibrary()
	{
		UClass* Class = UJoyConPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachJoyCon", &UJoyConPluginBPLibrary::execAttachJoyCon },
			{ "ConnectJoyCon", &UJoyConPluginBPLibrary::execConnectJoyCon },
			{ "DetachJoyCon", &UJoyConPluginBPLibrary::execDetachJoyCon },
			{ "DisconnectJoyCon", &UJoyConPluginBPLibrary::execDisconnectJoyCon },
			{ "GetAttachedJoyCons", &UJoyConPluginBPLibrary::execGetAttachedJoyCons },
			{ "GetConnectedJoyCons", &UJoyConPluginBPLibrary::execGetConnectedJoyCons },
			{ "GetJoyConAccelerometer", &UJoyConPluginBPLibrary::execGetJoyConAccelerometer },
			{ "GetJoyConGyroscope", &UJoyConPluginBPLibrary::execGetJoyConGyroscope },
			{ "GetJoyConVector", &UJoyConPluginBPLibrary::execGetJoyConVector },
			{ "ReCenterJoyCon", &UJoyConPluginBPLibrary::execReCenterJoyCon },
			{ "ResumeJoyConConnection", &UJoyConPluginBPLibrary::execResumeJoyConConnection },
			{ "SearchForJoyCons", &UJoyConPluginBPLibrary::execSearchForJoyCons },
			{ "SetJoyConFilterCoefficient", &UJoyConPluginBPLibrary::execSetJoyConFilterCoefficient },
			{ "SetJoyConGripMode", &UJoyConPluginBPLibrary::execSetJoyConGripMode },
			{ "SetJoyConRumble", &UJoyConPluginBPLibrary::execSetJoyConRumble },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics
	{
		struct JoyConPluginBPLibrary_eventAttachJoyCon_Parms
		{
			int32 ControllerId;
			int32 GripIndex;
			bool Success;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GripIndex;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventAttachJoyCon_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::NewProp_GripIndex = { "GripIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventAttachJoyCon_Parms, GripIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventAttachJoyCon_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventAttachJoyCon_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::NewProp_GripIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Attach" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "AttachJoyCon", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventAttachJoyCon_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics
	{
		struct JoyConPluginBPLibrary_eventConnectJoyCon_Parms
		{
			FJoyConInformation JoyConInformation;
			bool UseImu;
			bool UseLocalize;
			bool Success;
			int32 ControllerIndex;
			float Alpha;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoyConInformation;
		static void NewProp_UseImu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseImu;
		static void NewProp_UseLocalize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseLocalize;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_JoyConInformation = { "JoyConInformation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventConnectJoyCon_Parms, JoyConInformation), Z_Construct_UScriptStruct_FJoyConInformation, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_UseImu_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventConnectJoyCon_Parms*)Obj)->UseImu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_UseImu = { "UseImu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventConnectJoyCon_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_UseImu_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_UseLocalize_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventConnectJoyCon_Parms*)Obj)->UseLocalize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_UseLocalize = { "UseLocalize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventConnectJoyCon_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_UseLocalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventConnectJoyCon_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventConnectJoyCon_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventConnectJoyCon_Parms, ControllerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventConnectJoyCon_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_JoyConInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_UseImu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_UseLocalize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_ControllerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "CPP_Default_Alpha", "0.050000" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Connect" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "ConnectJoyCon", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventConnectJoyCon_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics
	{
		struct JoyConPluginBPLibrary_eventDetachJoyCon_Parms
		{
			int32 ControllerId;
			bool Success;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventDetachJoyCon_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventDetachJoyCon_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventDetachJoyCon_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Detach" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "DetachJoyCon", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventDetachJoyCon_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics
	{
		struct JoyConPluginBPLibrary_eventDisconnectJoyCon_Parms
		{
			int32 ControllerId;
			bool Success;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventDisconnectJoyCon_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventDisconnectJoyCon_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventDisconnectJoyCon_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Disconnect" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "DisconnectJoyCon", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventDisconnectJoyCon_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics
	{
		struct JoyConPluginBPLibrary_eventGetAttachedJoyCons_Parms
		{
			TArray<FJoyConInformation> JoyCons;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoyCons_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JoyCons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::NewProp_JoyCons_Inner = { "JoyCons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJoyConInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::NewProp_JoyCons = { "JoyCons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventGetAttachedJoyCons_Parms, JoyCons), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::NewProp_JoyCons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::NewProp_JoyCons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Get Attached" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "GetAttachedJoyCons", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventGetAttachedJoyCons_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics
	{
		struct JoyConPluginBPLibrary_eventGetConnectedJoyCons_Parms
		{
			TArray<FJoyConInformation> JoyCons;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoyCons_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JoyCons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::NewProp_JoyCons_Inner = { "JoyCons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJoyConInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::NewProp_JoyCons = { "JoyCons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventGetConnectedJoyCons_Parms, JoyCons), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::NewProp_JoyCons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::NewProp_JoyCons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Get Attached" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "GetConnectedJoyCons", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventGetConnectedJoyCons_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics
	{
		struct JoyConPluginBPLibrary_eventGetJoyConAccelerometer_Parms
		{
			int32 ControllerId;
			bool Success;
			FVector Accelerometer;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Accelerometer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventGetJoyConAccelerometer_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventGetJoyConAccelerometer_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventGetJoyConAccelerometer_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::NewProp_Accelerometer = { "Accelerometer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventGetJoyConAccelerometer_Parms, Accelerometer), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::NewProp_Accelerometer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Accelerometer" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "GetJoyConAccelerometer", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventGetJoyConAccelerometer_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics
	{
		struct JoyConPluginBPLibrary_eventGetJoyConGyroscope_Parms
		{
			int32 ControllerId;
			bool Success;
			FVector Gyroscope;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gyroscope;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventGetJoyConGyroscope_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventGetJoyConGyroscope_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventGetJoyConGyroscope_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::NewProp_Gyroscope = { "Gyroscope", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventGetJoyConGyroscope_Parms, Gyroscope), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::NewProp_Gyroscope,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Gyroscope" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "GetJoyConGyroscope", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventGetJoyConGyroscope_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics
	{
		struct JoyConPluginBPLibrary_eventGetJoyConVector_Parms
		{
			int32 ControllerId;
			bool Success;
			FRotator Vector;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventGetJoyConVector_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventGetJoyConVector_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventGetJoyConVector_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventGetJoyConVector_Parms, Vector), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::NewProp_Vector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons IMU Vector" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "GetJoyConVector", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventGetJoyConVector_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics
	{
		struct JoyConPluginBPLibrary_eventReCenterJoyCon_Parms
		{
			int32 ControllerId;
			bool Success;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventReCenterJoyCon_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventReCenterJoyCon_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventReCenterJoyCon_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons ReCenter IMU" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "ReCenterJoyCon", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventReCenterJoyCon_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics
	{
		struct JoyConPluginBPLibrary_eventResumeJoyConConnection_Parms
		{
			bool Success;
		};
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventResumeJoyConConnection_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventResumeJoyConConnection_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Resume Connection" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "ResumeJoyConConnection", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventResumeJoyConConnection_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics
	{
		struct JoyConPluginBPLibrary_eventSearchForJoyCons_Parms
		{
			TArray<FJoyConInformation> JoyCons;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JoyCons_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_JoyCons;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::NewProp_JoyCons_Inner = { "JoyCons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJoyConInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::NewProp_JoyCons = { "JoyCons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSearchForJoyCons_Parms, JoyCons), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::NewProp_JoyCons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::NewProp_JoyCons,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Search" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "SearchForJoyCons", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventSearchForJoyCons_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics
	{
		struct JoyConPluginBPLibrary_eventSetJoyConFilterCoefficient_Parms
		{
			int32 ControllerId;
			float Coefficient;
			bool Success;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSetJoyConFilterCoefficient_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSetJoyConFilterCoefficient_Parms, Coefficient), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventSetJoyConFilterCoefficient_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventSetJoyConFilterCoefficient_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::NewProp_Coefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Set Filter Coefficient" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "SetJoyConFilterCoefficient", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventSetJoyConFilterCoefficient_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics
	{
		struct JoyConPluginBPLibrary_eventSetJoyConGripMode_Parms
		{
			int32 GripIndex;
			EGripMode GripMode;
			bool Success;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GripIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GripMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GripMode;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_GripIndex = { "GripIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSetJoyConGripMode_Parms, GripIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_GripMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_GripMode = { "GripMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSetJoyConGripMode_Parms, GripMode), Z_Construct_UEnum_JoyConPlugin_EGripMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventSetJoyConGripMode_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventSetJoyConGripMode_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_GripIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_GripMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_GripMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Recenter IMU" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "SetJoyConGripMode", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventSetJoyConGripMode_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics
	{
		struct JoyConPluginBPLibrary_eventSetJoyConRumble_Parms
		{
			int32 ControllerId;
			float LowFrequency;
			float HighFrequency;
			float Amplitude;
			int32 Time;
			bool Success;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowFrequency;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighFrequency;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Time;
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSetJoyConRumble_Parms, ControllerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_LowFrequency = { "LowFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSetJoyConRumble_Parms, LowFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_HighFrequency = { "HighFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSetJoyConRumble_Parms, HighFrequency), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSetJoyConRumble_Parms, Amplitude), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JoyConPluginBPLibrary_eventSetJoyConRumble_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((JoyConPluginBPLibrary_eventSetJoyConRumble_Parms*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JoyConPluginBPLibrary_eventSetJoyConRumble_Parms), &Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_LowFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_HighFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::Function_MetaDataParams[] = {
		{ "Category", "JoyCon" },
		{ "Keywords", "Nintendo Switch Joy Con Cons JoyCon JoyCons Recenter IMU" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoyConPluginBPLibrary, nullptr, "SetJoyConRumble", nullptr, nullptr, sizeof(JoyConPluginBPLibrary_eventSetJoyConRumble_Parms), Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJoyConPluginBPLibrary_NoRegister()
	{
		return UJoyConPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UJoyConPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJoyConPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_JoyConPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoyConPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_AttachJoyCon, "AttachJoyCon" }, // 3247212998
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_ConnectJoyCon, "ConnectJoyCon" }, // 1747561130
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_DetachJoyCon, "DetachJoyCon" }, // 1342817383
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_DisconnectJoyCon, "DisconnectJoyCon" }, // 2122058329
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_GetAttachedJoyCons, "GetAttachedJoyCons" }, // 261424178
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_GetConnectedJoyCons, "GetConnectedJoyCons" }, // 3335644082
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConAccelerometer, "GetJoyConAccelerometer" }, // 954487695
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConGyroscope, "GetJoyConGyroscope" }, // 4053534514
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_GetJoyConVector, "GetJoyConVector" }, // 3337737168
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_ReCenterJoyCon, "ReCenterJoyCon" }, // 2237842407
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_ResumeJoyConConnection, "ResumeJoyConConnection" }, // 3691366073
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_SearchForJoyCons, "SearchForJoyCons" }, // 3928566765
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConFilterCoefficient, "SetJoyConFilterCoefficient" }, // 1613928457
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConGripMode, "SetJoyConGripMode" }, // 281501849
		{ &Z_Construct_UFunction_UJoyConPluginBPLibrary_SetJoyConRumble, "SetJoyConRumble" }, // 977359821
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoyConPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "JoyConPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/JoyConPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoyConPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoyConPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJoyConPluginBPLibrary_Statics::ClassParams = {
		&UJoyConPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJoyConPluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJoyConPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoyConPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJoyConPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJoyConPluginBPLibrary, 2650844905);
	template<> JOYCONPLUGIN_API UClass* StaticClass<UJoyConPluginBPLibrary>()
	{
		return UJoyConPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJoyConPluginBPLibrary(Z_Construct_UClass_UJoyConPluginBPLibrary, &UJoyConPluginBPLibrary::StaticClass, TEXT("/Script/JoyConPlugin"), TEXT("UJoyConPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoyConPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
