// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/TPInteractInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATP_PlayerCharacter;
#ifdef TWITCHPROTOTYPE_TPInteractInterface_generated_h
#error "TPInteractInterface.generated.h already included, missing '#pragma once' in TPInteractInterface.h"
#endif
#define TWITCHPROTOTYPE_TPInteractInterface_generated_h

#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_SPARSE_DATA
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(ATP_PlayerCharacter* PlayerCharacter) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_ACCESSORS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_CALLBACK_WRAPPERS
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TWITCHPROTOTYPE_API UTPInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TWITCHPROTOTYPE_API UTPInteractInterface(UTPInteractInterface&&); \
	TWITCHPROTOTYPE_API UTPInteractInterface(const UTPInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TWITCHPROTOTYPE_API, UTPInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTPInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTPInteractInterface) \
	TWITCHPROTOTYPE_API virtual ~UTPInteractInterface();


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTPInteractInterface(); \
	friend struct Z_Construct_UClass_UTPInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UTPInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), TWITCHPROTOTYPE_API) \
	DECLARE_SERIALIZER(UTPInteractInterface)


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITPInteractInterface() {} \
public: \
	typedef UTPInteractInterface UClassType; \
	typedef ITPInteractInterface ThisClass; \
	static void Execute_Interact(UObject* O, ATP_PlayerCharacter* PlayerCharacter); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_10_PROLOG
#define FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_SPARSE_DATA \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_ACCESSORS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_CALLBACK_WRAPPERS \
	FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class UTPInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
