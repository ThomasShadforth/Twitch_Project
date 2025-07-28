// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/TP_SaveSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameSaveData;
class USaveGame;
#ifdef TWITCHPROTOTYPE_TP_SaveSubsystem_generated_h
#error "TP_SaveSubsystem.generated.h already included, missing '#pragma once' in TP_SaveSubsystem.h"
#endif
#define TWITCHPROTOTYPE_TP_SaveSubsystem_generated_h

#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_16_DELEGATE \
TWITCHPROTOTYPE_API void FSaveSubSystemSaveGameCreated_DelegateWrapper(const FMulticastScriptDelegate& SaveSubSystemSaveGameCreated, bool bSuccess);


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_17_DELEGATE \
TWITCHPROTOTYPE_API void FSaveSubSystemSaveGameLoaded_DelegateWrapper(const FMulticastScriptDelegate& SaveSubSystemSaveGameLoaded, bool bSuccess);


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_18_DELEGATE \
TWITCHPROTOTYPE_API void FSaveSubSystemSaveGameSaveStarted_DelegateWrapper(const FMulticastScriptDelegate& SaveSubSystemSaveGameSaveStarted, UGameSaveData* SaveGame);


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_SPARSE_DATA
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleLoadSaveGameCompleted); \
	DECLARE_FUNCTION(execHandleCreateNewSaveCompleted); \
	DECLARE_FUNCTION(execSaveGame); \
	DECLARE_FUNCTION(execLoadSaveGame); \
	DECLARE_FUNCTION(execCreateNewSaveData);


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTP_SaveSubsystem(); \
	friend struct Z_Construct_UClass_UTP_SaveSubsystem_Statics; \
public: \
	DECLARE_CLASS(UTP_SaveSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), NO_API) \
	DECLARE_SERIALIZER(UTP_SaveSubsystem)


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_SaveSubsystem(UTP_SaveSubsystem&&); \
	NO_API UTP_SaveSubsystem(const UTP_SaveSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_SaveSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_SaveSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTP_SaveSubsystem) \
	NO_API virtual ~UTP_SaveSubsystem();


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_22_PROLOG
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_SPARSE_DATA \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class UTP_SaveSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
