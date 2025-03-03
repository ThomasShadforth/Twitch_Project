// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef TWITCHPROTOTYPE_TP_PlayerController_generated_h
#error "TP_PlayerController.generated.h already included, missing '#pragma once' in TP_PlayerController.h"
#endif
#define TWITCHPROTOTYPE_TP_PlayerController_generated_h

#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_SPARSE_DATA
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPauseTheGame); \
	DECLARE_FUNCTION(execStopHoldingPlayerAttack); \
	DECLARE_FUNCTION(execPlayerAttack); \
	DECLARE_FUNCTION(execPlayerStomp); \
	DECLARE_FUNCTION(execStopPlayerSprint); \
	DECLARE_FUNCTION(execPlayerStartSprint); \
	DECLARE_FUNCTION(execStopPlayerJump); \
	DECLARE_FUNCTION(execPlayerJump); \
	DECLARE_FUNCTION(execPlayerLook); \
	DECLARE_FUNCTION(execPlayerMove);


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_CALLBACK_WRAPPERS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_PlayerController(); \
	friend struct Z_Construct_UClass_ATP_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ATP_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), NO_API) \
	DECLARE_SERIALIZER(ATP_PlayerController)


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_PlayerController(ATP_PlayerController&&); \
	NO_API ATP_PlayerController(const ATP_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_PlayerController) \
	NO_API virtual ~ATP_PlayerController();


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_18_PROLOG
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_SPARSE_DATA \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_CALLBACK_WRAPPERS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class ATP_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
