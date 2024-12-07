// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP_Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIPatrolPath;
#ifdef TWITCHPROTOTYPE_TP_Enemy_generated_h
#error "TP_Enemy.generated.h already included, missing '#pragma once' in TP_Enemy.h"
#endif
#define TWITCHPROTOTYPE_TP_Enemy_generated_h

#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_SPARSE_DATA
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStateAsRetreat); \
	DECLARE_FUNCTION(execSetStateAsCower); \
	DECLARE_FUNCTION(execSetStateAsAttack); \
	DECLARE_FUNCTION(execSetStateAsPassive); \
	DECLARE_FUNCTION(execFinishRetreating); \
	DECLARE_FUNCTION(execGetEnemyPatrolPath);


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_Enemy(); \
	friend struct Z_Construct_UClass_ATP_Enemy_Statics; \
public: \
	DECLARE_CLASS(ATP_Enemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), NO_API) \
	DECLARE_SERIALIZER(ATP_Enemy) \
	virtual UObject* _getUObject() const override { return const_cast<ATP_Enemy*>(this); }


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_Enemy(ATP_Enemy&&); \
	NO_API ATP_Enemy(const ATP_Enemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_Enemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_Enemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_Enemy) \
	NO_API virtual ~ATP_Enemy();


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_16_PROLOG
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_SPARSE_DATA \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class ATP_Enemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
