// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerCharacterInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATP_PlayerController;
class UCharacterMovementComponent;
#ifdef TWITCHPROTOTYPE_PlayerCharacterInterface_generated_h
#error "PlayerCharacterInterface.generated.h already included, missing '#pragma once' in PlayerCharacterInterface.h"
#endif
#define TWITCHPROTOTYPE_PlayerCharacterInterface_generated_h

#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_SPARSE_DATA
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UCharacterMovementComponent* GetPlayerMovementComponent_Implementation() { return NULL; }; \
	virtual bool GetIsOnLadder_Implementation() { return false; }; \
	virtual void SetIsOnLadder_Implementation(bool bOnLadder) {}; \
	virtual ATP_PlayerController* GetPlayerCharacterController_Implementation() { return NULL; }; \
	virtual void SetHasPlayerBeenHit_Implementation(bool bHasBeenHit) {}; \
	virtual bool GetHasPlayerBeenHit_Implementation() { return false; }; \
	virtual bool GetPlayerMoveDisabled_Implementation() { return false; }; \
	virtual void PlayerStomp_Implementation() {}; \
	virtual void PlayerStopSprint_Implementation() {}; \
	virtual void PlayerSprint_Implementation() {}; \
	virtual void PlayerStopJump_Implementation() {}; \
	virtual void PlayerJump_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetPlayerMovementComponent); \
	DECLARE_FUNCTION(execGetIsOnLadder); \
	DECLARE_FUNCTION(execSetIsOnLadder); \
	DECLARE_FUNCTION(execGetPlayerCharacterController); \
	DECLARE_FUNCTION(execSetHasPlayerBeenHit); \
	DECLARE_FUNCTION(execGetHasPlayerBeenHit); \
	DECLARE_FUNCTION(execGetPlayerMoveDisabled); \
	DECLARE_FUNCTION(execPlayerStomp); \
	DECLARE_FUNCTION(execPlayerStopSprint); \
	DECLARE_FUNCTION(execPlayerSprint); \
	DECLARE_FUNCTION(execPlayerStopJump); \
	DECLARE_FUNCTION(execPlayerJump);


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_ACCESSORS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TWITCHPROTOTYPE_API UPlayerCharacterInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TWITCHPROTOTYPE_API UPlayerCharacterInterface(UPlayerCharacterInterface&&); \
	TWITCHPROTOTYPE_API UPlayerCharacterInterface(const UPlayerCharacterInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TWITCHPROTOTYPE_API, UPlayerCharacterInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerCharacterInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerCharacterInterface) \
	TWITCHPROTOTYPE_API virtual ~UPlayerCharacterInterface();


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerCharacterInterface(); \
	friend struct Z_Construct_UClass_UPlayerCharacterInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerCharacterInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TwitchPrototype"), TWITCHPROTOTYPE_API) \
	DECLARE_SERIALIZER(UPlayerCharacterInterface)


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerCharacterInterface() {} \
public: \
	typedef UPlayerCharacterInterface UClassType; \
	typedef IPlayerCharacterInterface ThisClass; \
	static bool Execute_GetHasPlayerBeenHit(UObject* O); \
	static bool Execute_GetIsOnLadder(UObject* O); \
	static ATP_PlayerController* Execute_GetPlayerCharacterController(UObject* O); \
	static bool Execute_GetPlayerMoveDisabled(UObject* O); \
	static UCharacterMovementComponent* Execute_GetPlayerMovementComponent(UObject* O); \
	static void Execute_PlayerJump(UObject* O); \
	static void Execute_PlayerSprint(UObject* O); \
	static void Execute_PlayerStomp(UObject* O); \
	static void Execute_PlayerStopJump(UObject* O); \
	static void Execute_PlayerStopSprint(UObject* O); \
	static void Execute_SetHasPlayerBeenHit(UObject* O, bool bHasBeenHit); \
	static void Execute_SetIsOnLadder(UObject* O, bool bOnLadder); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_10_PROLOG
#define FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_SPARSE_DATA \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_ACCESSORS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWITCHPROTOTYPE_API UClass* StaticClass<class UPlayerCharacterInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
