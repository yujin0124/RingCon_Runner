// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoyConPlugin/Public/JoyConGrip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyConGrip() {}
// Cross Module References
	JOYCONPLUGIN_API UEnum* Z_Construct_UEnum_JoyConPlugin_EGripMode();
	UPackage* Z_Construct_UPackage__Script_JoyConPlugin();
	JOYCONPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FJoyConGrip();
// End Cross Module References
	static UEnum* EGripMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_JoyConPlugin_EGripMode, Z_Construct_UPackage__Script_JoyConPlugin(), TEXT("EGripMode"));
		}
		return Singleton;
	}
	template<> JOYCONPLUGIN_API UEnum* StaticEnum<EGripMode>()
	{
		return EGripMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripMode(EGripMode_StaticEnum, TEXT("/Script/JoyConPlugin"), TEXT("EGripMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_JoyConPlugin_EGripMode_Hash() { return 3487023620U; }
	UEnum* Z_Construct_UEnum_JoyConPlugin_EGripMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_JoyConPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripMode"), 0, Get_Z_Construct_UEnum_JoyConPlugin_EGripMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGripMode::Auto", (int64)EGripMode::Auto },
				{ "EGripMode::Portrait", (int64)EGripMode::Portrait },
				{ "EGripMode::Landscape", (int64)EGripMode::Landscape },
				{ "EGripMode::GamePad", (int64)EGripMode::GamePad },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.DisplayName", "Auto" },
				{ "Auto.Name", "EGripMode::Auto" },
				{ "GamePad.DisplayName", "GamePad" },
				{ "GamePad.Name", "EGripMode::GamePad" },
				{ "Landscape.DisplayName", "Landscape" },
				{ "Landscape.Name", "EGripMode::Landscape" },
				{ "ModuleRelativePath", "Public/JoyConGrip.h" },
				{ "Portrait.DisplayName", "Portrait" },
				{ "Portrait.Name", "EGripMode::Portrait" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_JoyConPlugin,
				nullptr,
				"EGripMode",
				"EGripMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FJoyConGrip::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern JOYCONPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FJoyConGrip_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJoyConGrip, Z_Construct_UPackage__Script_JoyConPlugin(), TEXT("JoyConGrip"), sizeof(FJoyConGrip), Get_Z_Construct_UScriptStruct_FJoyConGrip_Hash());
	}
	return Singleton;
}
template<> JOYCONPLUGIN_API UScriptStruct* StaticStruct<FJoyConGrip>()
{
	return FJoyConGrip::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJoyConGrip(FJoyConGrip::StaticStruct, TEXT("/Script/JoyConPlugin"), TEXT("JoyConGrip"), false, nullptr, nullptr);
static struct FScriptStruct_JoyConPlugin_StaticRegisterNativesFJoyConGrip
{
	FScriptStruct_JoyConPlugin_StaticRegisterNativesFJoyConGrip()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JoyConGrip")),new UScriptStruct::TCppStructOps<FJoyConGrip>);
	}
} ScriptStruct_JoyConPlugin_StaticRegisterNativesFJoyConGrip;
	struct Z_Construct_UScriptStruct_FJoyConGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GripIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConGrip_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JoyConGrip.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJoyConGrip>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_GripIndex_MetaData[] = {
		{ "Category", "JoyConGrip" },
		{ "Comment", "/*\n\x09 * Device Info\n\x09 */" },
		{ "ModuleRelativePath", "Public/JoyConGrip.h" },
		{ "ToolTip", "* Device Info" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_GripIndex = { "GripIndex", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConGrip, GripIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_GripIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_GripIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "JoyConGrip" },
		{ "ModuleRelativePath", "Public/JoyConGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJoyConGrip, Mode), Z_Construct_UEnum_JoyConPlugin_EGripMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoyConGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_GripIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_Mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoyConGrip_Statics::NewProp_Mode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoyConGrip_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JoyConPlugin,
		nullptr,
		&NewStructOps,
		"JoyConGrip",
		sizeof(FJoyConGrip),
		alignof(FJoyConGrip),
		Z_Construct_UScriptStruct_FJoyConGrip_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConGrip_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoyConGrip_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoyConGrip_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoyConGrip()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJoyConGrip_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_JoyConPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JoyConGrip"), sizeof(FJoyConGrip), Get_Z_Construct_UScriptStruct_FJoyConGrip_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJoyConGrip_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJoyConGrip_Hash() { return 4270836571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
