// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JOYCONPLUGIN_JoyConGrip_generated_h
#error "JoyConGrip.generated.h already included, missing '#pragma once' in JoyConGrip.h"
#endif
#define JOYCONPLUGIN_JoyConGrip_generated_h

#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConGrip_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJoyConGrip_Statics; \
	JOYCONPLUGIN_API static class UScriptStruct* StaticStruct();


template<> JOYCONPLUGIN_API UScriptStruct* StaticStruct<struct FJoyConGrip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConGrip_h


#define FOREACH_ENUM_EGRIPMODE(op) \
	op(EGripMode::Auto) \
	op(EGripMode::Portrait) \
	op(EGripMode::Landscape) \
	op(EGripMode::GamePad) 

enum class EGripMode : uint8;
template<> JOYCONPLUGIN_API UEnum* StaticEnum<EGripMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
