// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP_PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWITCHPROTOTYPE_TP_PlayerCharacter_generated_h
#error "TP_PlayerCharacter.generated.h already included, missing '#pragma once' in TP_PlayerCharacter.h"
#endif
#define TWITCHPROTOTYPE_TP_PlayerCharacter_generated_h

#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_SPARSE_DATA
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCoyoteTimeEnd); \
	DECLARE_FUNCTION(execStompLandSquashFinished); \
	DECLARE_FUNCTION(execStompLandSquashUpdate); \
	DECLARE_FUNCTION(execLandSquashFinished); \
	DECLARE_FUNCTION(execLandSquashUpdate); \
	DECLARE_FUNCTION(execJumpSquashFinished); \
	DECLARE_FUNCTION(execJumpSquashUpdate);


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_PlayerCharacter(); \
	friend struct Z_Construct_UClass_ATP_PlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ATP_PlayerCharacter, ATPCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), NO_API) \
	DECLARE_SERIALIZER(ATP_PlayerCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ATP_PlayerCharacter*>(this); }


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_PlayerCharacter(ATP_PlayerCharacter&&); \
	NO_API ATP_PlayerCharacter(const ATP_PlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_PlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_PlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_PlayerCharacter) \
	NO_API virtual ~ATP_PlayerCharacter();


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_17_PROLOG
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_SPARSE_DATA \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class ATP_PlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
