// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/TP_PlayerController.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_PlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_PlayerController();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_PlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ATP_PlayerController::execTempSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TempSave();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execPauseTheGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseTheGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execStopHoldingPlayerAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopHoldingPlayerAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execPlayerAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execPlayerStomp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStomp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execStopPlayerSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPlayerSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execPlayerStartSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStartSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execStopPlayerJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopPlayerJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execPlayerJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execPlayerLook)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerLook(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execPlayerStopMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerStopMove(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerController::execPlayerMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerMove(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	static FName NAME_ATP_PlayerController_TestCollectibleTmaps = FName(TEXT("TestCollectibleTmaps"));
	void ATP_PlayerController::TestCollectibleTmaps()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATP_PlayerController_TestCollectibleTmaps),NULL);
	}
	void ATP_PlayerController::StaticRegisterNativesATP_PlayerController()
	{
		UClass* Class = ATP_PlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PauseTheGame", &ATP_PlayerController::execPauseTheGame },
			{ "PlayerAttack", &ATP_PlayerController::execPlayerAttack },
			{ "PlayerJump", &ATP_PlayerController::execPlayerJump },
			{ "PlayerLook", &ATP_PlayerController::execPlayerLook },
			{ "PlayerMove", &ATP_PlayerController::execPlayerMove },
			{ "PlayerStartSprint", &ATP_PlayerController::execPlayerStartSprint },
			{ "PlayerStomp", &ATP_PlayerController::execPlayerStomp },
			{ "PlayerStopMove", &ATP_PlayerController::execPlayerStopMove },
			{ "StopHoldingPlayerAttack", &ATP_PlayerController::execStopHoldingPlayerAttack },
			{ "StopPlayerJump", &ATP_PlayerController::execStopPlayerJump },
			{ "StopPlayerSprint", &ATP_PlayerController::execStopPlayerSprint },
			{ "TempSave", &ATP_PlayerController::execTempSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_PlayerController_PauseTheGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PauseTheGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_PauseTheGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "PauseTheGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PauseTheGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_PauseTheGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_PauseTheGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_PauseTheGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_PlayerAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_PlayerAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "PlayerAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_PlayerAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_PlayerAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_PlayerAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_PlayerJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_PlayerJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "PlayerJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_PlayerJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_PlayerJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_PlayerJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics
	{
		struct TP_PlayerController_eventPlayerLook_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerController_eventPlayerLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "PlayerLook", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::TP_PlayerController_eventPlayerLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::TP_PlayerController_eventPlayerLook_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerController_PlayerLook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_PlayerLook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics
	{
		struct TP_PlayerController_eventPlayerMove_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerController_eventPlayerMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "PlayerMove", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::TP_PlayerController_eventPlayerMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::TP_PlayerController_eventPlayerMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerController_PlayerMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_PlayerMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_PlayerStartSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerStartSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_PlayerStartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "PlayerStartSprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerStartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_PlayerStartSprint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_PlayerStartSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_PlayerStartSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_PlayerStomp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerStomp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_PlayerStomp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "PlayerStomp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerStomp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_PlayerStomp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_PlayerStomp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_PlayerStomp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics
	{
		struct TP_PlayerController_eventPlayerStopMove_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerController_eventPlayerStopMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::NewProp_Value_MetaData) }; // 1693336646
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "PlayerStopMove", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::TP_PlayerController_eventPlayerStopMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::TP_PlayerController_eventPlayerStopMove_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_StopHoldingPlayerAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_StopHoldingPlayerAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_StopHoldingPlayerAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "StopHoldingPlayerAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_StopHoldingPlayerAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_StopHoldingPlayerAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_StopHoldingPlayerAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_StopHoldingPlayerAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_StopPlayerJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_StopPlayerJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_StopPlayerJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "StopPlayerJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_StopPlayerJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_StopPlayerJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_StopPlayerJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_StopPlayerJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_StopPlayerSprint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_StopPlayerSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_StopPlayerSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "StopPlayerSprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_StopPlayerSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_StopPlayerSprint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_StopPlayerSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_StopPlayerSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_TempSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_TempSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_TempSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "TempSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_TempSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_TempSave_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_TempSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_TempSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerController_TestCollectibleTmaps_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerController_TestCollectibleTmaps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerController_TestCollectibleTmaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerController, nullptr, "TestCollectibleTmaps", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerController_TestCollectibleTmaps_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerController_TestCollectibleTmaps_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerController_TestCollectibleTmaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerController_TestCollectibleTmaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_PlayerController);
	UClass* Z_Construct_UClass_ATP_PlayerController_NoRegister()
	{
		return ATP_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATP_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerDefaultContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerDefaultContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_moveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopMoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopMoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopJumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopJumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sprintAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sprintAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopSprintAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopSprintAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stompAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stompAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pauseAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pauseAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_testCollectibleAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_testCollectibleAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_testSaveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_testSaveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pauseMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_pauseMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pauseMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_pauseMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveGameClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_saveGameClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_saveGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_saveGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_PlayerController_PauseTheGame, "PauseTheGame" }, // 2775402145
		{ &Z_Construct_UFunction_ATP_PlayerController_PlayerAttack, "PlayerAttack" }, // 4079320870
		{ &Z_Construct_UFunction_ATP_PlayerController_PlayerJump, "PlayerJump" }, // 2441393574
		{ &Z_Construct_UFunction_ATP_PlayerController_PlayerLook, "PlayerLook" }, // 1466706579
		{ &Z_Construct_UFunction_ATP_PlayerController_PlayerMove, "PlayerMove" }, // 3659211591
		{ &Z_Construct_UFunction_ATP_PlayerController_PlayerStartSprint, "PlayerStartSprint" }, // 1752397643
		{ &Z_Construct_UFunction_ATP_PlayerController_PlayerStomp, "PlayerStomp" }, // 3673516157
		{ &Z_Construct_UFunction_ATP_PlayerController_PlayerStopMove, "PlayerStopMove" }, // 1338996470
		{ &Z_Construct_UFunction_ATP_PlayerController_StopHoldingPlayerAttack, "StopHoldingPlayerAttack" }, // 1432435431
		{ &Z_Construct_UFunction_ATP_PlayerController_StopPlayerJump, "StopPlayerJump" }, // 2826970226
		{ &Z_Construct_UFunction_ATP_PlayerController_StopPlayerSprint, "StopPlayerSprint" }, // 1158834353
		{ &Z_Construct_UFunction_ATP_PlayerController_TempSave, "TempSave" }, // 2509131301
		{ &Z_Construct_UFunction_ATP_PlayerController_TestCollectibleTmaps, "TestCollectibleTmaps" }, // 1132244125
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TP_PlayerController.h" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_playerDefaultContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_playerDefaultContext = { "playerDefaultContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, playerDefaultContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_playerDefaultContext_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_playerDefaultContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_moveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_moveAction = { "moveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_moveAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_moveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopMoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopMoveAction = { "stopMoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, stopMoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopMoveAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopMoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_jumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_jumpAction = { "jumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_jumpAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_jumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopJumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopJumpAction = { "stopJumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, stopJumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopJumpAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopJumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_lookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_lookAction = { "lookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_lookAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_lookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_sprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_sprintAction = { "sprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, sprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_sprintAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_sprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopSprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopSprintAction = { "stopSprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, stopSprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopSprintAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopSprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stompAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stompAction = { "stompAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, stompAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stompAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stompAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_attackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_attackAction = { "attackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, attackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_attackAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_attackAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopAttackAction = { "stopAttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, stopAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopAttackAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopAttackAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseAction = { "pauseAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, pauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testCollectibleAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TEST INPUTS" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testCollectibleAction = { "testCollectibleAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, testCollectibleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testCollectibleAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testCollectibleAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testSaveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TEST INPUTS" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testSaveAction = { "testSaveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, testSaveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testSaveAction_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testSaveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenuClass_MetaData[] = {
		{ "Category", "TP_PlayerController" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenuClass = { "pauseMenuClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, pauseMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenuClass_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenu = { "pauseMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, pauseMenu), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenu_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenu_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGameClass_MetaData[] = {
		{ "Category", "TP_PlayerController" },
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGameClass = { "saveGameClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, saveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGameClass_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGameClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGame_MetaData[] = {
		{ "ModuleRelativePath", "TP_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGame = { "saveGame", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerController, saveGame), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGame_MetaData), Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGame_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_playerDefaultContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_moveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopMoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_jumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopJumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_lookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_sprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopSprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stompAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_attackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_stopAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testCollectibleAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_testSaveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_pauseMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGameClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerController_Statics::NewProp_saveGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_PlayerController_Statics::ClassParams = {
		&ATP_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_PlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_PlayerController()
	{
		if (!Z_Registration_Info_UClass_ATP_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_PlayerController.OuterSingleton, Z_Construct_UClass_ATP_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_PlayerController.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_PlayerController>()
	{
		return ATP_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_PlayerController);
	ATP_PlayerController::~ATP_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_PlayerController, ATP_PlayerController::StaticClass, TEXT("ATP_PlayerController"), &Z_Registration_Info_UClass_ATP_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_PlayerController), 2394595934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_4250992872(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
