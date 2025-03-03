// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/TPDamageInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TWITCHPROTOTYPE_TPDamageInterface_generated_h
#error "TPDamageInterface.generated.h already included, missing '#pragma once' in TPDamageInterface.h"
#endif
#define TWITCHPROTOTYPE_TPDamageInterface_generated_h

#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_SPARSE_DATA
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DamageCharacter_Implementation(AActor* DamageCauser, float KnockbackModifier) {}; \
 \
	DECLARE_FUNCTION(execDamageCharacter);


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_CALLBACK_WRAPPERS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TWITCHPROTOTYPE_API UTPDamageInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TWITCHPROTOTYPE_API UTPDamageInterface(UTPDamageInterface&&); \
	TWITCHPROTOTYPE_API UTPDamageInterface(const UTPDamageInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TWITCHPROTOTYPE_API, UTPDamageInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTPDamageInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTPDamageInterface) \
	TWITCHPROTOTYPE_API virtual ~UTPDamageInterface();


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTPDamageInterface(); \
	friend struct Z_Construct_UClass_UTPDamageInterface_Statics; \
public: \
	DECLARE_CLASS(UTPDamageInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), TWITCHPROTOTYPE_API) \
	DECLARE_SERIALIZER(UTPDamageInterface)


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITPDamageInterface() {} \
public: \
	typedef UTPDamageInterface UClassType; \
	typedef ITPDamageInterface ThisClass; \
	static void Execute_DamageCharacter(UObject* O, AActor* DamageCauser, float KnockbackModifier); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_10_PROLOG
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_SPARSE_DATA \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_CALLBACK_WRAPPERS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class UTPDamageInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPDamageInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
