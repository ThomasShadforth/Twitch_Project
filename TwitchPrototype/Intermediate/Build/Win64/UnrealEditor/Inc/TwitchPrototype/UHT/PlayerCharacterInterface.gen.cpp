// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Player/PlayerCharacterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_PlayerController_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerCharacterInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerCharacterInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerCharacterInterface::execGetPlayerMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCharacterMovementComponent**)Z_Param__Result=P_THIS->GetPlayerMovementComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execGetIsOnLadder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsOnLadder_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execSetIsOnLadder)
	{
		P_GET_UBOOL(Z_Param_bOnLadder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsOnLadder_Implementation(Z_Param_bOnLadder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execGetPlayerCharacterController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATP_PlayerController**)Z_Param__Result=P_THIS->GetPlayerCharacterController_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execSetHasPlayerBeenHit)
	{
		P_GET_UBOOL(Z_Param_bHasBeenHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasPlayerBeenHit_Implementation(Z_Param_bHasBeenHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execGetHasPlayerBeenHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasPlayerBeenHit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execGetPlayerMoveDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPlayerMoveDisabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execPlayerStomp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStomp_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execPlayerStopSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStopSprint_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execPlayerSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerSprint_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execPlayerStopJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStopJump_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPlayerCharacterInterface::execPlayerJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerJump_Implementation();
		P_NATIVE_END;
	}
	struct PlayerCharacterInterface_eventGetHasPlayerBeenHit_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerCharacterInterface_eventGetHasPlayerBeenHit_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PlayerCharacterInterface_eventGetIsOnLadder_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerCharacterInterface_eventGetIsOnLadder_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PlayerCharacterInterface_eventGetPlayerCharacterController_Parms
	{
		ATP_PlayerController* ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerCharacterInterface_eventGetPlayerCharacterController_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct PlayerCharacterInterface_eventGetPlayerMoveDisabled_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerCharacterInterface_eventGetPlayerMoveDisabled_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct PlayerCharacterInterface_eventGetPlayerMovementComponent_Parms
	{
		UCharacterMovementComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		PlayerCharacterInterface_eventGetPlayerMovementComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct PlayerCharacterInterface_eventSetHasPlayerBeenHit_Parms
	{
		bool bHasBeenHit;
	};
	struct PlayerCharacterInterface_eventSetIsOnLadder_Parms
	{
		bool bOnLadder;
	};
	bool IPlayerCharacterInterface::GetHasPlayerBeenHit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHasPlayerBeenHit instead.");
		PlayerCharacterInterface_eventGetHasPlayerBeenHit_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPlayerCharacterInterface::GetIsOnLadder()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIsOnLadder instead.");
		PlayerCharacterInterface_eventGetIsOnLadder_Parms Parms;
		return Parms.ReturnValue;
	}
	ATP_PlayerController* IPlayerCharacterInterface::GetPlayerCharacterController()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPlayerCharacterController instead.");
		PlayerCharacterInterface_eventGetPlayerCharacterController_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IPlayerCharacterInterface::GetPlayerMoveDisabled()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPlayerMoveDisabled instead.");
		PlayerCharacterInterface_eventGetPlayerMoveDisabled_Parms Parms;
		return Parms.ReturnValue;
	}
	UCharacterMovementComponent* IPlayerCharacterInterface::GetPlayerMovementComponent()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPlayerMovementComponent instead.");
		PlayerCharacterInterface_eventGetPlayerMovementComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPlayerCharacterInterface::PlayerJump()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayerJump instead.");
	}
	void IPlayerCharacterInterface::PlayerSprint()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayerSprint instead.");
	}
	void IPlayerCharacterInterface::PlayerStomp()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayerStomp instead.");
	}
	void IPlayerCharacterInterface::PlayerStopJump()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayerStopJump instead.");
	}
	void IPlayerCharacterInterface::PlayerStopSprint()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayerStopSprint instead.");
	}
	void IPlayerCharacterInterface::SetHasPlayerBeenHit(bool bHasBeenHit)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHasPlayerBeenHit instead.");
	}
	void IPlayerCharacterInterface::SetIsOnLadder(bool bOnLadder)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetIsOnLadder instead.");
	}
	void UPlayerCharacterInterface::StaticRegisterNativesUPlayerCharacterInterface()
	{
		UClass* Class = UPlayerCharacterInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHasPlayerBeenHit", &IPlayerCharacterInterface::execGetHasPlayerBeenHit },
			{ "GetIsOnLadder", &IPlayerCharacterInterface::execGetIsOnLadder },
			{ "GetPlayerCharacterController", &IPlayerCharacterInterface::execGetPlayerCharacterController },
			{ "GetPlayerMoveDisabled", &IPlayerCharacterInterface::execGetPlayerMoveDisabled },
			{ "GetPlayerMovementComponent", &IPlayerCharacterInterface::execGetPlayerMovementComponent },
			{ "PlayerJump", &IPlayerCharacterInterface::execPlayerJump },
			{ "PlayerSprint", &IPlayerCharacterInterface::execPlayerSprint },
			{ "PlayerStomp", &IPlayerCharacterInterface::execPlayerStomp },
			{ "PlayerStopJump", &IPlayerCharacterInterface::execPlayerStopJump },
			{ "PlayerStopSprint", &IPlayerCharacterInterface::execPlayerStopSprint },
			{ "SetHasPlayerBeenHit", &IPlayerCharacterInterface::execSetHasPlayerBeenHit },
			{ "SetIsOnLadder", &IPlayerCharacterInterface::execSetIsOnLadder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCharacterInterface_eventGetHasPlayerBeenHit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacterInterface_eventGetHasPlayerBeenHit_Parms), &Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "GetHasPlayerBeenHit", nullptr, nullptr, Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::PropPointers), sizeof(PlayerCharacterInterface_eventGetHasPlayerBeenHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerCharacterInterface_eventGetHasPlayerBeenHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCharacterInterface_eventGetIsOnLadder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacterInterface_eventGetIsOnLadder_Parms), &Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "GetIsOnLadder", nullptr, nullptr, Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::PropPointers), sizeof(PlayerCharacterInterface_eventGetIsOnLadder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerCharacterInterface_eventGetIsOnLadder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacterInterface_eventGetPlayerCharacterController_Parms, ReturnValue), Z_Construct_UClass_ATP_PlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "GetPlayerCharacterController", nullptr, nullptr, Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::PropPointers), sizeof(PlayerCharacterInterface_eventGetPlayerCharacterController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerCharacterInterface_eventGetPlayerCharacterController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerCharacterInterface_eventGetPlayerMoveDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacterInterface_eventGetPlayerMoveDisabled_Parms), &Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "GetPlayerMoveDisabled", nullptr, nullptr, Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::PropPointers), sizeof(PlayerCharacterInterface_eventGetPlayerMoveDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerCharacterInterface_eventGetPlayerMoveDisabled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacterInterface_eventGetPlayerMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "GetPlayerMovementComponent", nullptr, nullptr, Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::PropPointers), sizeof(PlayerCharacterInterface_eventGetPlayerMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerCharacterInterface_eventGetPlayerMovementComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_PlayerJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_PlayerJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_PlayerJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "PlayerJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_PlayerJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_PlayerJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_PlayerJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_PlayerJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_PlayerSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_PlayerSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_PlayerSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "PlayerSprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_PlayerSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_PlayerSprint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_PlayerSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_PlayerSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStomp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStomp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStomp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "PlayerStomp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStomp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStomp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStomp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStomp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "PlayerStopJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "PlayerStopSprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopSprint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics
	{
		static void NewProp_bHasBeenHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::NewProp_bHasBeenHit_SetBit(void* Obj)
	{
		((PlayerCharacterInterface_eventSetHasPlayerBeenHit_Parms*)Obj)->bHasBeenHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::NewProp_bHasBeenHit = { "bHasBeenHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacterInterface_eventSetHasPlayerBeenHit_Parms), &Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::NewProp_bHasBeenHit_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::NewProp_bHasBeenHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "SetHasPlayerBeenHit", nullptr, nullptr, Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::PropPointers), sizeof(PlayerCharacterInterface_eventSetHasPlayerBeenHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerCharacterInterface_eventSetHasPlayerBeenHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics
	{
		static void NewProp_bOnLadder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnLadder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::NewProp_bOnLadder_SetBit(void* Obj)
	{
		((PlayerCharacterInterface_eventSetIsOnLadder_Parms*)Obj)->bOnLadder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::NewProp_bOnLadder = { "bOnLadder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacterInterface_eventSetIsOnLadder_Parms), &Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::NewProp_bOnLadder_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::NewProp_bOnLadder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerCharacterInterface, nullptr, "SetIsOnLadder", nullptr, nullptr, Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::PropPointers), sizeof(PlayerCharacterInterface_eventSetIsOnLadder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::PropPointers) < 2048);
	static_assert(sizeof(PlayerCharacterInterface_eventSetIsOnLadder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCharacterInterface);
	UClass* Z_Construct_UClass_UPlayerCharacterInterface_NoRegister()
	{
		return UPlayerCharacterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCharacterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCharacterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerCharacterInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_GetHasPlayerBeenHit, "GetHasPlayerBeenHit" }, // 2872598587
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_GetIsOnLadder, "GetIsOnLadder" }, // 2572014229
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerCharacterController, "GetPlayerCharacterController" }, // 2787586995
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMoveDisabled, "GetPlayerMoveDisabled" }, // 3987612312
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_GetPlayerMovementComponent, "GetPlayerMovementComponent" }, // 22902655
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_PlayerJump, "PlayerJump" }, // 1074956268
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_PlayerSprint, "PlayerSprint" }, // 1613750693
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStomp, "PlayerStomp" }, // 1997792366
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopJump, "PlayerStopJump" }, // 2667534215
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_PlayerStopSprint, "PlayerStopSprint" }, // 1604169277
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_SetHasPlayerBeenHit, "SetHasPlayerBeenHit" }, // 2556938231
		{ &Z_Construct_UFunction_UPlayerCharacterInterface_SetIsOnLadder, "SetIsOnLadder" }, // 1346952138
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerCharacterInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCharacterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerCharacterInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCharacterInterface_Statics::ClassParams = {
		&UPlayerCharacterInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerCharacterInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPlayerCharacterInterface()
	{
		if (!Z_Registration_Info_UClass_UPlayerCharacterInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCharacterInterface.OuterSingleton, Z_Construct_UClass_UPlayerCharacterInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerCharacterInterface.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UPlayerCharacterInterface>()
	{
		return UPlayerCharacterInterface::StaticClass();
	}
	UPlayerCharacterInterface::UPlayerCharacterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacterInterface);
	UPlayerCharacterInterface::~UPlayerCharacterInterface() {}
	static FName NAME_UPlayerCharacterInterface_GetHasPlayerBeenHit = FName(TEXT("GetHasPlayerBeenHit"));
	bool IPlayerCharacterInterface::Execute_GetHasPlayerBeenHit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		PlayerCharacterInterface_eventGetHasPlayerBeenHit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_GetHasPlayerBeenHit);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetHasPlayerBeenHit_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerCharacterInterface_GetIsOnLadder = FName(TEXT("GetIsOnLadder"));
	bool IPlayerCharacterInterface::Execute_GetIsOnLadder(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		PlayerCharacterInterface_eventGetIsOnLadder_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_GetIsOnLadder);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetIsOnLadder_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerCharacterInterface_GetPlayerCharacterController = FName(TEXT("GetPlayerCharacterController"));
	ATP_PlayerController* IPlayerCharacterInterface::Execute_GetPlayerCharacterController(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		PlayerCharacterInterface_eventGetPlayerCharacterController_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_GetPlayerCharacterController);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPlayerCharacterController_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerCharacterInterface_GetPlayerMoveDisabled = FName(TEXT("GetPlayerMoveDisabled"));
	bool IPlayerCharacterInterface::Execute_GetPlayerMoveDisabled(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		PlayerCharacterInterface_eventGetPlayerMoveDisabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_GetPlayerMoveDisabled);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPlayerMoveDisabled_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerCharacterInterface_GetPlayerMovementComponent = FName(TEXT("GetPlayerMovementComponent"));
	UCharacterMovementComponent* IPlayerCharacterInterface::Execute_GetPlayerMovementComponent(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		PlayerCharacterInterface_eventGetPlayerMovementComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_GetPlayerMovementComponent);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPlayerMovementComponent_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPlayerCharacterInterface_PlayerJump = FName(TEXT("PlayerJump"));
	void IPlayerCharacterInterface::Execute_PlayerJump(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_PlayerJump);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			I->PlayerJump_Implementation();
		}
	}
	static FName NAME_UPlayerCharacterInterface_PlayerSprint = FName(TEXT("PlayerSprint"));
	void IPlayerCharacterInterface::Execute_PlayerSprint(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_PlayerSprint);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			I->PlayerSprint_Implementation();
		}
	}
	static FName NAME_UPlayerCharacterInterface_PlayerStomp = FName(TEXT("PlayerStomp"));
	void IPlayerCharacterInterface::Execute_PlayerStomp(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_PlayerStomp);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			I->PlayerStomp_Implementation();
		}
	}
	static FName NAME_UPlayerCharacterInterface_PlayerStopJump = FName(TEXT("PlayerStopJump"));
	void IPlayerCharacterInterface::Execute_PlayerStopJump(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_PlayerStopJump);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			I->PlayerStopJump_Implementation();
		}
	}
	static FName NAME_UPlayerCharacterInterface_PlayerStopSprint = FName(TEXT("PlayerStopSprint"));
	void IPlayerCharacterInterface::Execute_PlayerStopSprint(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_PlayerStopSprint);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			I->PlayerStopSprint_Implementation();
		}
	}
	static FName NAME_UPlayerCharacterInterface_SetHasPlayerBeenHit = FName(TEXT("SetHasPlayerBeenHit"));
	void IPlayerCharacterInterface::Execute_SetHasPlayerBeenHit(UObject* O, bool bHasBeenHit)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		PlayerCharacterInterface_eventSetHasPlayerBeenHit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_SetHasPlayerBeenHit);
		if (Func)
		{
			Parms.bHasBeenHit=bHasBeenHit;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			I->SetHasPlayerBeenHit_Implementation(bHasBeenHit);
		}
	}
	static FName NAME_UPlayerCharacterInterface_SetIsOnLadder = FName(TEXT("SetIsOnLadder"));
	void IPlayerCharacterInterface::Execute_SetIsOnLadder(UObject* O, bool bOnLadder)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerCharacterInterface::StaticClass()));
		PlayerCharacterInterface_eventSetIsOnLadder_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerCharacterInterface_SetIsOnLadder);
		if (Func)
		{
			Parms.bOnLadder=bOnLadder;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerCharacterInterface*)(O->GetNativeInterfaceAddress(UPlayerCharacterInterface::StaticClass())))
		{
			I->SetIsOnLadder_Implementation(bOnLadder);
		}
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCharacterInterface, UPlayerCharacterInterface::StaticClass, TEXT("UPlayerCharacterInterface"), &Z_Registration_Info_UClass_UPlayerCharacterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCharacterInterface), 2458221685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_1390191212(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_PlayerCharacterInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
