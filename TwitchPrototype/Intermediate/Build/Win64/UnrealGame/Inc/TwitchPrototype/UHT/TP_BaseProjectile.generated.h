// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP_BaseProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UGameplayEffect;
class UProjectileMovementComponent;
#ifdef TWITCHPROTOTYPE_TP_BaseProjectile_generated_h
#error "TP_BaseProjectile.generated.h already included, missing '#pragma once' in TP_BaseProjectile.h"
#endif
#define TWITCHPROTOTYPE_TP_BaseProjectile_generated_h

#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_SPARSE_DATA
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProjectileMovement); \
	DECLARE_FUNCTION(execGetProjectileSpeed); \
	DECLARE_FUNCTION(execSetOwningActor); \
	DECLARE_FUNCTION(execApplyGameplayEffectToTarget);


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_BaseProjectile(); \
	friend struct Z_Construct_UClass_ATP_BaseProjectile_Statics; \
public: \
	DECLARE_CLASS(ATP_BaseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), NO_API) \
	DECLARE_SERIALIZER(ATP_BaseProjectile)


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_BaseProjectile(ATP_BaseProjectile&&); \
	NO_API ATP_BaseProjectile(const ATP_BaseProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_BaseProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_BaseProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_BaseProjectile) \
	NO_API virtual ~ATP_BaseProjectile();


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_12_PROLOG
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_SPARSE_DATA \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class ATP_BaseProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
