// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/TPCollectibleInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATP_CollectibleBase;
#ifdef TWITCHPROTOTYPE_TPCollectibleInterface_generated_h
#error "TPCollectibleInterface.generated.h already included, missing '#pragma once' in TPCollectibleInterface.h"
#endif
#define TWITCHPROTOTYPE_TPCollectibleInterface_generated_h

#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_SPARSE_DATA
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TestCollectedCollectible_Implementation() {}; \
	virtual void CollectedCollectible_Implementation(ATP_CollectibleBase* Collectible) {}; \
 \
	DECLARE_FUNCTION(execTestCollectedCollectible); \
	DECLARE_FUNCTION(execCollectedCollectible);


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_CALLBACK_WRAPPERS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TWITCHPROTOTYPE_API UTPCollectibleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TWITCHPROTOTYPE_API UTPCollectibleInterface(UTPCollectibleInterface&&); \
	TWITCHPROTOTYPE_API UTPCollectibleInterface(const UTPCollectibleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TWITCHPROTOTYPE_API, UTPCollectibleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTPCollectibleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTPCollectibleInterface) \
	TWITCHPROTOTYPE_API virtual ~UTPCollectibleInterface();


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTPCollectibleInterface(); \
	friend struct Z_Construct_UClass_UTPCollectibleInterface_Statics; \
public: \
	DECLARE_CLASS(UTPCollectibleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), TWITCHPROTOTYPE_API) \
	DECLARE_SERIALIZER(UTPCollectibleInterface)


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITPCollectibleInterface() {} \
public: \
	typedef UTPCollectibleInterface UClassType; \
	typedef ITPCollectibleInterface ThisClass; \
	static void Execute_CollectedCollectible(UObject* O, ATP_CollectibleBase* Collectible); \
	static void Execute_TestCollectedCollectible(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_12_PROLOG
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_SPARSE_DATA \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_CALLBACK_WRAPPERS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class UTPCollectibleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
