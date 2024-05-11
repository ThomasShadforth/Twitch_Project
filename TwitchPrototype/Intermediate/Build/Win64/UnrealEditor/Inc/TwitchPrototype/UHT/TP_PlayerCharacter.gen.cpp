// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/TP_PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_PlayerCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_PlayerCharacter();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_PlayerCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ATP_PlayerCharacter::execStompLandSquashFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StompLandSquashFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execStompLandSquashUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StompLandSquashUpdate(Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execLandSquashFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LandSquashFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execLandSquashUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LandSquashUpdate(Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execJumpSquashFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpSquashFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execJumpSquashUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpSquashUpdate(Z_Param_Alpha);
		P_NATIVE_END;
	}
	static FName NAME_ATP_PlayerCharacter_CheckTempSprintButton = FName(TEXT("CheckTempSprintButton"));
	void ATP_PlayerCharacter::CheckTempSprintButton()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATP_PlayerCharacter_CheckTempSprintButton),NULL);
	}
	void ATP_PlayerCharacter::StaticRegisterNativesATP_PlayerCharacter()
	{
		UClass* Class = ATP_PlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JumpSquashFinished", &ATP_PlayerCharacter::execJumpSquashFinished },
			{ "JumpSquashUpdate", &ATP_PlayerCharacter::execJumpSquashUpdate },
			{ "LandSquashFinished", &ATP_PlayerCharacter::execLandSquashFinished },
			{ "LandSquashUpdate", &ATP_PlayerCharacter::execLandSquashUpdate },
			{ "StompLandSquashFinished", &ATP_PlayerCharacter::execStompLandSquashFinished },
			{ "StompLandSquashUpdate", &ATP_PlayerCharacter::execStompLandSquashUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_CheckTempSprintButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_CheckTempSprintButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_CheckTempSprintButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "CheckTempSprintButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_CheckTempSprintButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_CheckTempSprintButton_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_CheckTempSprintButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_CheckTempSprintButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "JumpSquashFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics
	{
		struct TP_PlayerCharacter_eventJumpSquashUpdate_Parms
		{
			float Alpha;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventJumpSquashUpdate_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "JumpSquashUpdate", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::TP_PlayerCharacter_eventJumpSquashUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::TP_PlayerCharacter_eventJumpSquashUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "LandSquashFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics
	{
		struct TP_PlayerCharacter_eventLandSquashUpdate_Parms
		{
			float Alpha;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventLandSquashUpdate_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "LandSquashUpdate", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::TP_PlayerCharacter_eventLandSquashUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::TP_PlayerCharacter_eventLandSquashUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "StompLandSquashFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashFinished_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics
	{
		struct TP_PlayerCharacter_eventStompLandSquashUpdate_Parms
		{
			float Alpha;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventStompLandSquashUpdate_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "StompLandSquashUpdate", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::TP_PlayerCharacter_eventStompLandSquashUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::TP_PlayerCharacter_eventStompLandSquashUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_PlayerCharacter);
	UClass* Z_Construct_UClass_ATP_PlayerCharacter_NoRegister()
	{
		return ATP_PlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATP_PlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerDefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerDefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_moveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stopJumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_stopJumpAction;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mainCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mainCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dashDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dashDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxAirDashes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxAirDashes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airDashCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_airDashCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stompForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stompForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stompDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stompDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sprintStartInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sprintStartInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sprintStopInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sprintStopInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sphereCastPoint_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_sphereCastPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallCheckRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallCheckRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallCheckDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallCheckDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forwardWallForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forwardWallForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_upwardWallForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_upwardWallForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraDefaultFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraDefaultFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraSprintFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraSprintFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentCameraFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentCameraFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fovInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fovInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_baseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpSqueezeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_jumpSqueezeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_landSqueezeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_landSqueezeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stompLandSqueezeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_stompLandSqueezeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jumpSquashCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpSquashCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_landSquashCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_landSquashCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_PlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_PlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_CheckTempSprintButton, "CheckTempSprintButton" }, // 1867219079
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashFinished, "JumpSquashFinished" }, // 1930837543
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate, "JumpSquashUpdate" }, // 2996724732
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashFinished, "LandSquashFinished" }, // 3383075559
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate, "LandSquashUpdate" }, // 3648626628
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashFinished, "StompLandSquashFinished" }, // 3209178486
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate, "StompLandSquashUpdate" }, // 1997411083
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_PlayerCharacter.h" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDefaultMappingContext = { "playerDefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerDefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDefaultMappingContext_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_moveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_moveAction = { "moveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, moveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_moveAction_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_moveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpAction = { "jumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, jumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpAction_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_lookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_lookAction = { "lookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, lookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_lookAction_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_lookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopJumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopJumpAction = { "stopJumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, stopJumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopJumpAction_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopJumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintAction = { "sprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, sprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintAction_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopSprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopSprintAction = { "stopSprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, stopSprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopSprintAction_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopSprintAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompAction = { "stompAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, stompAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompAction_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraBoom = { "cameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraBoom_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_mainCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_mainCamera = { "mainCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, mainCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_mainCamera_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_mainCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dashDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Air Dash" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dashDistance = { "dashDistance", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, dashDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dashDistance_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dashDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_maxAirDashes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Air Dash" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_maxAirDashes = { "maxAirDashes", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, maxAirDashes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_maxAirDashes_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_maxAirDashes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Air Dash" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCount = { "airDashCount", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, airDashCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCount_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stomp" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompForce = { "stompForce", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, stompForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompForce_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompDelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stomp" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompDelayTime = { "stompDelayTime", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, stompDelayTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompDelayTime_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompDelayTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, walkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_walkSpeed_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_walkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintSpeed = { "sprintSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, sprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintSpeed_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStartInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStartInterpSpeed = { "sprintStartInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, sprintStartInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStartInterpSpeed_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStartInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStopInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStopInterpSpeed = { "sprintStopInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, sprintStopInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStopInterpSpeed_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStopInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sphereCastPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Jump" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Name of the skeletal bone where the sphere trace is made for wall jumping\n" },
#endif
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the skeletal bone where the sphere trace is made for wall jumping" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sphereCastPoint = { "sphereCastPoint", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, sphereCastPoint), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sphereCastPoint_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sphereCastPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckRadius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Jump" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckRadius = { "wallCheckRadius", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, wallCheckRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckRadius_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Jump" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckDistance = { "wallCheckDistance", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, wallCheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckDistance_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_forwardWallForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Jump" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_forwardWallForce = { "forwardWallForce", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, forwardWallForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_forwardWallForce_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_forwardWallForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Jump" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce = { "upwardWallForce", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, upwardWallForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraDefaultFOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraDefaultFOV = { "cameraDefaultFOV", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, cameraDefaultFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraDefaultFOV_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraDefaultFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraSprintFOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraSprintFOV = { "cameraSprintFOV", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, cameraSprintFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraSprintFOV_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraSprintFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV = { "currentCameraFOV", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, currentCameraFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_fovInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_fovInterpSpeed = { "fovInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, fovInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_fovInterpSpeed_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_fovInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_baseScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Squash & Strecth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Squash and Stretch controls\n" },
#endif
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Squash and Stretch controls" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_baseScale = { "baseScale", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, baseScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_baseScale_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_baseScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSqueezeFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Squash & Strecth" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSqueezeFactor = { "jumpSqueezeFactor", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, jumpSqueezeFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSqueezeFactor_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSqueezeFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSqueezeFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Squash & Strecth" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSqueezeFactor = { "landSqueezeFactor", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, landSqueezeFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSqueezeFactor_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSqueezeFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompLandSqueezeFactor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Squash & Strecth" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompLandSqueezeFactor = { "stompLandSqueezeFactor", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, stompLandSqueezeFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompLandSqueezeFactor_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompLandSqueezeFactor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSquashCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Squash & Stretch" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSquashCurve = { "jumpSquashCurve", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, jumpSquashCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSquashCurve_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSquashCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSquashCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Squash & Stretch" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSquashCurve = { "landSquashCurve", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, landSquashCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSquashCurve_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSquashCurve_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_PlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_moveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_lookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopJumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stopSprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_mainCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_maxAirDashes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_walkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStartInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStopInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sphereCastPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_forwardWallForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraDefaultFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraSprintFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_fovInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_baseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSqueezeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSqueezeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompLandSqueezeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSquashCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSquashCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_PlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_PlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::ClassParams = {
		&ATP_PlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_PlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_PlayerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_PlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_ATP_PlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_PlayerCharacter.OuterSingleton, Z_Construct_UClass_ATP_PlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_PlayerCharacter.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_PlayerCharacter>()
	{
		return ATP_PlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_PlayerCharacter);
	ATP_PlayerCharacter::~ATP_PlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_PlayerCharacter, ATP_PlayerCharacter::StaticClass, TEXT("ATP_PlayerCharacter"), &Z_Registration_Info_UClass_ATP_PlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_PlayerCharacter), 1157885693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_1385803846(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
