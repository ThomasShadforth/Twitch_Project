// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TP_DamageInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWITCHPROTOTYPE_TP_DamageInterface_generated_h
#error "TP_DamageInterface.generated.h already included, missing '#pragma once' in TP_DamageInterface.h"
#endif
#define TWITCHPROTOTYPE_TP_DamageInterface_generated_h

#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_SPARSE_DATA
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DamageHit_Implementation() {}; \
 \
	DECLARE_FUNCTION(execDamageHit);


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TWITCHPROTOTYPE_API UTP_DamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TWITCHPROTOTYPE_API UTP_DamageInterface(UTP_DamageInterface&&); \
	TWITCHPROTOTYPE_API UTP_DamageInterface(const UTP_DamageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TWITCHPROTOTYPE_API, UTP_DamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_DamageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_DamageInterface) \
	TWITCHPROTOTYPE_API virtual ~UTP_DamageInterface();


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTP_DamageInterface(); \
	friend struct Z_Construct_UClass_UTP_DamageInterface_Statics; \
public: \
	DECLARE_CLASS(UTP_DamageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), TWITCHPROTOTYPE_API) \
	DECLARE_SERIALIZER(UTP_DamageInterface)


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITP_DamageInterface() {} \
public: \
	typedef UTP_DamageInterface UClassType; \
	typedef ITP_DamageInterface ThisClass; \
	static void Execute_DamageHit(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_10_PROLOG
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_SPARSE_DATA \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class UTP_DamageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_DamageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
