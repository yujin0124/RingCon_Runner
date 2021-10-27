// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoyConPlugin/Public/JoyConInformation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyConInformation() {}
// Cross Module References
	JOYCONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoyConInformation();
	UPackage* Z_Construct_UPackage__Script_JoyConPlugin();
// End Cross Module References
class UScriptStruct* FJoyConInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JOYCONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FJoyConInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoyConInformation, Z_Construct_UPackage__Script_JoyConPlugin(), TEXT("JoyConInformation"), sizeof(FJoyConInformation), Get_Z_Construct_UScriptStruct_FJoyConInformation_Hash());
	}
	return Singleton;
}
template<> JOYCONPLUGIN_API UScriptStruct* StaticStruct<FJoyConInformation>()
{
	return FJoyConInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJoyConInformation(FJoyConInformation::StaticStruct, TEXT("/Script/JoyConPlugin"), TEXT("JoyConInformation"), false, nullptr, nullptr);
static struct FScriptStruct_JoyConPlugin_StaticRegisterNativesFJoyConInformation
{
	FScriptStruct_JoyConPlugin_StaticRegisterNativesFJoyConInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JoyConInformation")),new UScriptStruct::TCppStructOps<FJoyConInformation>);
	}
} ScriptStruct_JoyConPlugin_StaticRegisterNativesFJoyConInformation;
	struct Z_Construct_UScriptStruct_FJoyConInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ProductId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VendorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VendorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InterfaceNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReleaseNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManufacturerString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ManufacturerString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BluetoothPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BluetoothPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SerialNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ControllerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Usage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsagePage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UsagePage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeft_MetaData[];
#endif
		static void NewProp_IsLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsConnected_MetaData[];
#endif
		static void NewProp_IsConnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttached_MetaData[];
#endif
		static void NewProp_IsAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoyConInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductId_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "Comment", "/*\n\x09 * Device Info\n\x09 */" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
		{ "ToolTip", "* Device Info" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, ProductId), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_VendorId_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_VendorId = { "VendorId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, VendorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_VendorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_VendorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_InterfaceNumber_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_InterfaceNumber = { "InterfaceNumber", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, InterfaceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_InterfaceNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_InterfaceNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ReleaseNumber_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ReleaseNumber = { "ReleaseNumber", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, ReleaseNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ReleaseNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ReleaseNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ManufacturerString_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ManufacturerString = { "ManufacturerString", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, ManufacturerString), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ManufacturerString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ManufacturerString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_BluetoothPath_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_BluetoothPath = { "BluetoothPath", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, BluetoothPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_BluetoothPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_BluetoothPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductString_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductString = { "ProductString", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, ProductString), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_SerialNumber_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, SerialNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_SerialNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_SerialNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ControllerId_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, ControllerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ControllerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ControllerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_Usage_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, Usage), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_Usage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_Usage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_UsagePage_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_UsagePage = { "UsagePage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConInformation, UsagePage), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_UsagePage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_UsagePage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsLeft_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsLeft_SetBit(void* Obj)
	{
		((FJoyConInformation*)Obj)->IsLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsLeft = { "IsLeft", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJoyConInformation), &Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsLeft_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsConnected_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsConnected_SetBit(void* Obj)
	{
		((FJoyConInformation*)Obj)->IsConnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsConnected = { "IsConnected", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJoyConInformation), &Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsConnected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsAttached_MetaData[] = {
		{ "Category", "JoyConInformation" },
		{ "ModuleRelativePath", "Public/JoyConInformation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsAttached_SetBit(void* Obj)
	{
		((FJoyConInformation*)Obj)->IsAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsAttached = { "IsAttached", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FJoyConInformation), &Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsAttached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsAttached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoyConInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_VendorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_InterfaceNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ReleaseNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ManufacturerString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_BluetoothPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ProductString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_SerialNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_ControllerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_Usage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_UsagePage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConInformation_Statics::NewProp_IsAttached,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoyConInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyConPlugin,
		nullptr,
		&NewStructOps,
		"JoyConInformation",
		sizeof(FJoyConInformation),
		alignof(FJoyConInformation),
		Z_Construct_UScriptStruct_FJoyConInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoyConInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJoyConInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JoyConPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JoyConInformation"), sizeof(FJoyConInformation), Get_Z_Construct_UScriptStruct_FJoyConInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJoyConInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJoyConInformation_Hash() { return 2861797946U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
