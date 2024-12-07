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
#ifdef TWITCHPROTOTYPE_TP_BaseProjectile_generated_h
#error "TP_BaseProjectile.generated.h already included, missing '#pragma once' in TP_BaseProjectile.h"
#endif
#define TWITCHPROTOTYPE_TP_BaseProjectile_generated_h

#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_SPARSE_DATA
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProjectileSpeed); \
	DECLARE_FUNCTION(execSetOwningActor);


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP_BaseProjectile(); \
	friend struct Z_Construct_UClass_ATP_BaseProjectile_Statics; \
public: \
	DECLARE_CLASS(ATP_BaseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), NO_API) \
	DECLARE_SERIALIZER(ATP_BaseProjectile)


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP_BaseProjectile(ATP_BaseProjectile&&); \
	NO_API ATP_BaseProjectile(const ATP_BaseProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP_BaseProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP_BaseProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP_BaseProjectile) \
	NO_API virtual ~ATP_BaseProjectile();


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_11_PROLOG
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_SPARSE_DATA \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class ATP_BaseProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
