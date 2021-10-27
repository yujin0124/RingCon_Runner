// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGripMode : uint8;
struct FRotator;
struct FVector;
struct FJoyConInformation;
#ifdef JOYCONPLUGIN_JoyConPluginBPLibrary_generated_h
#error "JoyConPluginBPLibrary.generated.h already included, missing '#pragma once' in JoyConPluginBPLibrary.h"
#endif
#define JOYCONPLUGIN_JoyConPluginBPLibrary_generated_h

#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_SPARSE_DATA
#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetJoyConRumble); \
	DECLARE_FUNCTION(execSetJoyConGripMode); \
	DECLARE_FUNCTION(execSetJoyConFilterCoefficient); \
	DECLARE_FUNCTION(execReCenterJoyCon); \
	DECLARE_FUNCTION(execGetJoyConVector); \
	DECLARE_FUNCTION(execGetJoyConGyroscope); \
	DECLARE_FUNCTION(execGetJoyConAccelerometer); \
	DECLARE_FUNCTION(execGetConnectedJoyCons); \
	DECLARE_FUNCTION(execGetAttachedJoyCons); \
	DECLARE_FUNCTION(execSearchForJoyCons); \
	DECLARE_FUNCTION(execDetachJoyCon); \
	DECLARE_FUNCTION(execDisconnectJoyCon); \
	DECLARE_FUNCTION(execAttachJoyCon); \
	DECLARE_FUNCTION(execConnectJoyCon); \
	DECLARE_FUNCTION(execResumeJoyConConnection);


#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetJoyConRumble); \
	DECLARE_FUNCTION(execSetJoyConGripMode); \
	DECLARE_FUNCTION(execSetJoyConFilterCoefficient); \
	DECLARE_FUNCTION(execReCenterJoyCon); \
	DECLARE_FUNCTION(execGetJoyConVector); \
	DECLARE_FUNCTION(execGetJoyConGyroscope); \
	DECLARE_FUNCTION(execGetJoyConAccelerometer); \
	DECLARE_FUNCTION(execGetConnectedJoyCons); \
	DECLARE_FUNCTION(execGetAttachedJoyCons); \
	DECLARE_FUNCTION(execSearchForJoyCons); \
	DECLARE_FUNCTION(execDetachJoyCon); \
	DECLARE_FUNCTION(execDisconnectJoyCon); \
	DECLARE_FUNCTION(execAttachJoyCon); \
	DECLARE_FUNCTION(execConnectJoyCon); \
	DECLARE_FUNCTION(execResumeJoyConConnection);


#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJoyConPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UJoyConPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UJoyConPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JoyConPlugin"), NO_API) \
	DECLARE_SERIALIZER(UJoyConPluginBPLibrary)


#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUJoyConPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UJoyConPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UJoyConPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JoyConPlugin"), NO_API) \
	DECLARE_SERIALIZER(UJoyConPluginBPLibrary)


#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyConPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyConPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyConPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyConPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyConPluginBPLibrary(UJoyConPluginBPLibrary&&); \
	NO_API UJoyConPluginBPLibrary(const UJoyConPluginBPLibrary&); \
public:


#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJoyConPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJoyConPluginBPLibrary(UJoyConPluginBPLibrary&&); \
	NO_API UJoyConPluginBPLibrary(const UJoyConPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJoyConPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJoyConPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJoyConPluginBPLibrary)


#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_PRIVATE_PROPERTY_OFFSET
#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_28_PROLOG
#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_PRIVATE_PROPERTY_OFFSET \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_SPARSE_DATA \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_RPC_WRAPPERS \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_INCLASS \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_PRIVATE_PROPERTY_OFFSET \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_SPARSE_DATA \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_INCLASS_NO_PURE_DECLS \
	testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JOYCONPLUGIN_API UClass* StaticClass<class UJoyConPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID testalpha_Plugins_JoyConPlugin_Source_JoyConPlugin_Public_JoyConPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
