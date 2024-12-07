// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPEnemyInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIPatrolPath;
class ATP_BaseProjectile;
class USceneComponent;
enum class EMoveSpeedTypes : uint8;
#ifdef TWITCHPROTOTYPE_TPEnemyInterface_generated_h
#error "TPEnemyInterface.generated.h already included, missing '#pragma once' in TPEnemyInterface.h"
#endif
#define TWITCHPROTOTYPE_TPEnemyInterface_generated_h

#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_SPARSE_DATA
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSubclassOf<ATP_BaseProjectile>  GetEnemyProjectileClass_Implementation() { return NULL; }; \
	virtual USceneComponent* GetProjectileFirePoint_Implementation() { return NULL; }; \
	virtual void DamageEnemy_Implementation() {}; \
	virtual bool GetShouldActivatePerception_Implementation() { return false; }; \
	virtual void SetMoveSpeed_Implementation(EMoveSpeedTypes speedType) {}; \
	virtual AAIPatrolPath* GetPatrolRoute_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetEnemyProjectileClass); \
	DECLARE_FUNCTION(execGetProjectileFirePoint); \
	DECLARE_FUNCTION(execDamageEnemy); \
	DECLARE_FUNCTION(execGetShouldActivatePerception); \
	DECLARE_FUNCTION(execSetMoveSpeed); \
	DECLARE_FUNCTION(execGetPatrolRoute);


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TWITCHPROTOTYPE_API UTPEnemyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TWITCHPROTOTYPE_API UTPEnemyInterface(UTPEnemyInterface&&); \
	TWITCHPROTOTYPE_API UTPEnemyInterface(const UTPEnemyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TWITCHPROTOTYPE_API, UTPEnemyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTPEnemyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTPEnemyInterface) \
	TWITCHPROTOTYPE_API virtual ~UTPEnemyInterface();


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTPEnemyInterface(); \
	friend struct Z_Construct_UClass_UTPEnemyInterface_Statics; \
public: \
	DECLARE_CLASS(UTPEnemyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), TWITCHPROTOTYPE_API) \
	DECLARE_SERIALIZER(UTPEnemyInterface)


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITPEnemyInterface() {} \
public: \
	typedef UTPEnemyInterface UClassType; \
	typedef ITPEnemyInterface ThisClass; \
	static void Execute_DamageEnemy(UObject* O); \
	static TSubclassOf<ATP_BaseProjectile>  Execute_GetEnemyProjectileClass(UObject* O); \
	static AAIPatrolPath* Execute_GetPatrolRoute(UObject* O); \
	static USceneComponent* Execute_GetProjectileFirePoint(UObject* O); \
	static bool Execute_GetShouldActivatePerception(UObject* O); \
	static void Execute_SetMoveSpeed(UObject* O, EMoveSpeedTypes speedType); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_14_PROLOG
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_SPARSE_DATA \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class UTPEnemyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
