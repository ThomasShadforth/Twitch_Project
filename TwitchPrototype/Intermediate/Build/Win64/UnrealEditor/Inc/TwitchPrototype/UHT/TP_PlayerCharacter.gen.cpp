// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/TP_PlayerCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_PlayerCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_BaseProjectile_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_PlayerCharacter();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_PlayerCharacter_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATPCharacterBase();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerCharacterInterface_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPDamageInterface_NoRegister();
	TWITCHPROTOTYPE_API UEnum* Z_Construct_UEnum_TwitchPrototype_EPlayerStates();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerStates;
	static UEnum* EPlayerStates_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerStates.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwitchPrototype_EPlayerStates, (UObject*)Z_Construct_UPackage__Script_TwitchPrototype(), TEXT("EPlayerStates"));
		}
		return Z_Registration_Info_UEnum_EPlayerStates.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UEnum* StaticEnum<EPlayerStates>()
	{
		return EPlayerStates_StaticEnum();
	}
	struct Z_Construct_UEnum_TwitchPrototype_EPlayerStates_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TwitchPrototype_EPlayerStates_Statics::Enumerators[] = {
		{ "EPlayerStates::EPS_Grounded", (int64)EPlayerStates::EPS_Grounded },
		{ "EPlayerStates::EPS_Climbing", (int64)EPlayerStates::EPS_Climbing },
		{ "EPlayerStates::EPS_Falling", (int64)EPlayerStates::EPS_Falling },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TwitchPrototype_EPlayerStates_Statics::Enum_MetaDataParams[] = {
		{ "EPS_Climbing.DisplayName", "Climbing" },
		{ "EPS_Climbing.Name", "EPlayerStates::EPS_Climbing" },
		{ "EPS_Falling.DisplayName", "Falling" },
		{ "EPS_Falling.Name", "EPlayerStates::EPS_Falling" },
		{ "EPS_Grounded.DisplayName", "Grounded" },
		{ "EPS_Grounded.Name", "EPlayerStates::EPS_Grounded" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TwitchPrototype_EPlayerStates_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype,
		nullptr,
		"EPlayerStates",
		"EPlayerStates",
		Z_Construct_UEnum_TwitchPrototype_EPlayerStates_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchPrototype_EPlayerStates_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TwitchPrototype_EPlayerStates_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TwitchPrototype_EPlayerStates_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_TwitchPrototype_EPlayerStates()
	{
		if (!Z_Registration_Info_UEnum_EPlayerStates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerStates.InnerSingleton, Z_Construct_UEnum_TwitchPrototype_EPlayerStates_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerStates.InnerSingleton;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execResetWasStomp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetWasStomp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execResetDamageSoundTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDamageSoundTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execResetWallSlideSoundTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetWallSlideSoundTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execWallSlideDirectionBoxEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WallSlideDirectionBoxEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execWallSlideDirectionBoxOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WallSlideDirectionBoxOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execInteractSphereEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractSphereEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execInteractSphereOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execChargeBoxOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChargeBoxOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_PlayerCharacter::execOnCoyoteTimeEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCoyoteTimeEnd();
		P_NATIVE_END;
	}
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
	DEFINE_FUNCTION(ATP_PlayerCharacter::execManageCameraTransitions)
	{
		P_GET_UBOOL(Z_Param_bSwapToMainCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManageCameraTransitions(Z_Param_bSwapToMainCamera);
		P_NATIVE_END;
	}
	void ATP_PlayerCharacter::StaticRegisterNativesATP_PlayerCharacter()
	{
		UClass* Class = ATP_PlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChargeBoxOverlap", &ATP_PlayerCharacter::execChargeBoxOverlap },
			{ "InteractSphereEndOverlap", &ATP_PlayerCharacter::execInteractSphereEndOverlap },
			{ "InteractSphereOverlap", &ATP_PlayerCharacter::execInteractSphereOverlap },
			{ "JumpSquashFinished", &ATP_PlayerCharacter::execJumpSquashFinished },
			{ "JumpSquashUpdate", &ATP_PlayerCharacter::execJumpSquashUpdate },
			{ "LandSquashFinished", &ATP_PlayerCharacter::execLandSquashFinished },
			{ "LandSquashUpdate", &ATP_PlayerCharacter::execLandSquashUpdate },
			{ "ManageCameraTransitions", &ATP_PlayerCharacter::execManageCameraTransitions },
			{ "OnCoyoteTimeEnd", &ATP_PlayerCharacter::execOnCoyoteTimeEnd },
			{ "ResetDamageSoundTimer", &ATP_PlayerCharacter::execResetDamageSoundTimer },
			{ "ResetWallSlideSoundTimer", &ATP_PlayerCharacter::execResetWallSlideSoundTimer },
			{ "ResetWasStomp", &ATP_PlayerCharacter::execResetWasStomp },
			{ "StompLandSquashFinished", &ATP_PlayerCharacter::execStompLandSquashFinished },
			{ "StompLandSquashUpdate", &ATP_PlayerCharacter::execStompLandSquashUpdate },
			{ "WallSlideDirectionBoxEndOverlap", &ATP_PlayerCharacter::execWallSlideDirectionBoxEndOverlap },
			{ "WallSlideDirectionBoxOverlap", &ATP_PlayerCharacter::execWallSlideDirectionBoxOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics
	{
		struct TP_PlayerCharacter_eventChargeBoxOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventChargeBoxOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventChargeBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventChargeBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventChargeBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TP_PlayerCharacter_eventChargeBoxOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TP_PlayerCharacter_eventChargeBoxOverlap_Parms), &Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventChargeBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "ChargeBoxOverlap", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::TP_PlayerCharacter_eventChargeBoxOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::TP_PlayerCharacter_eventChargeBoxOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics
	{
		struct TP_PlayerCharacter_eventInteractSphereEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventInteractSphereEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventInteractSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventInteractSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventInteractSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "InteractSphereEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::TP_PlayerCharacter_eventInteractSphereEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::TP_PlayerCharacter_eventInteractSphereEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics
	{
		struct TP_PlayerCharacter_eventInteractSphereOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventInteractSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventInteractSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventInteractSphereOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventInteractSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TP_PlayerCharacter_eventInteractSphereOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TP_PlayerCharacter_eventInteractSphereOverlap_Parms), &Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventInteractSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "InteractSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::TP_PlayerCharacter_eventInteractSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::TP_PlayerCharacter_eventInteractSphereOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics
	{
		struct TP_PlayerCharacter_eventManageCameraTransitions_Parms
		{
			bool bSwapToMainCamera;
		};
		static void NewProp_bSwapToMainCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwapToMainCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::NewProp_bSwapToMainCamera_SetBit(void* Obj)
	{
		((TP_PlayerCharacter_eventManageCameraTransitions_Parms*)Obj)->bSwapToMainCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::NewProp_bSwapToMainCamera = { "bSwapToMainCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TP_PlayerCharacter_eventManageCameraTransitions_Parms), &Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::NewProp_bSwapToMainCamera_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::NewProp_bSwapToMainCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "ManageCameraTransitions", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::TP_PlayerCharacter_eventManageCameraTransitions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::TP_PlayerCharacter_eventManageCameraTransitions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_OnCoyoteTimeEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_OnCoyoteTimeEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_OnCoyoteTimeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "OnCoyoteTimeEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_OnCoyoteTimeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_OnCoyoteTimeEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_OnCoyoteTimeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_OnCoyoteTimeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_ResetDamageSoundTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_ResetDamageSoundTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_ResetDamageSoundTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "ResetDamageSoundTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ResetDamageSoundTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_ResetDamageSoundTimer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_ResetDamageSoundTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_ResetDamageSoundTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_ResetWallSlideSoundTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_ResetWallSlideSoundTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_ResetWallSlideSoundTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "ResetWallSlideSoundTimer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ResetWallSlideSoundTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_ResetWallSlideSoundTimer_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_ResetWallSlideSoundTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_ResetWallSlideSoundTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_ResetWasStomp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_ResetWasStomp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_ResetWasStomp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "ResetWasStomp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_ResetWasStomp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_ResetWasStomp_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_ResetWasStomp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_ResetWasStomp_Statics::FuncParams);
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
	struct Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics
	{
		struct TP_PlayerCharacter_eventWallSlideDirectionBoxEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventWallSlideDirectionBoxEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventWallSlideDirectionBoxEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventWallSlideDirectionBoxEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventWallSlideDirectionBoxEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "WallSlideDirectionBoxEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::TP_PlayerCharacter_eventWallSlideDirectionBoxEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::TP_PlayerCharacter_eventWallSlideDirectionBoxEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics
	{
		struct TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms), &Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_PlayerCharacter, nullptr, "WallSlideDirectionBoxOverlap", nullptr, nullptr, Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::TP_PlayerCharacter_eventWallSlideDirectionBoxOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mainCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mainCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueCameraPosition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dialogueCameraPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWallSliding_MetaData[];
#endif
		static void NewProp_bWallSliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWallSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanWallSlide_MetaData[];
#endif
		static void NewProp_bCanWallSlide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanWallSlide;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultAirControl_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_defaultAirControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_postWallJumpAirControl_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_postWallJumpAirControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airControlInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_airControlInterpSpeed;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slidingWallJumpModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_slidingWallJumpModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_upwardWallForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_upwardWallForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallSlideDirectionCheckBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_wallSlideDirectionCheckBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraDefaultFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraDefaultFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraSprintFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraSprintFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraAirDashFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cameraAirDashFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentCameraFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentCameraFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sprintFOVInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sprintFOVInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airDashFOVInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_airDashFOVInterpSpeed;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_coyoteTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_coyoteTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallSlideRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallSlideRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startingWallSlideRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_startingWallSlideRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minWallSlideRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minWallSlideRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallSlideRateChangeSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallSlideRateChangeSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallSlideCheckDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallSlideCheckDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallSlideCheckRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallSlideCheckRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_initialWallSlideCheckDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_initialWallSlideCheckDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aimingTimeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_aimingTimeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aimingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_aimingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerChargeOverlapBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerChargeOverlapBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileThrowPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileThrowPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_projectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groundCheckPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_groundCheckPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groundCheckLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_groundCheckLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chargeKnockbackModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_chargeKnockbackModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileAttackSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileAttackSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerJumpSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerJumpSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerDamageSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerDamageSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerNormalLandingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerNormalLandingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerStompLandingSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerStompLandingSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerAirDashSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerAirDashSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerWallJumpSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerWallJumpSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerWallSlideSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerWallSlideSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerDeathSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerDeathSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wallSlideSoundResetTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_wallSlideSoundResetTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerDamageSoundResetTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerDamageSoundResetTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactOverlapSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_interactOverlapSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueCameraClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_dialogueCameraClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueCamBlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dialogueCamBlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueCamBlendExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dialogueCamBlendExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stompCameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_stompCameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_airDashCameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_airDashCameraShake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_PlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATPCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_PlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_ChargeBoxOverlap, "ChargeBoxOverlap" }, // 3881508809
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereEndOverlap, "InteractSphereEndOverlap" }, // 3715928445
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_InteractSphereOverlap, "InteractSphereOverlap" }, // 20596776
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashFinished, "JumpSquashFinished" }, // 1930837543
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_JumpSquashUpdate, "JumpSquashUpdate" }, // 2996724732
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashFinished, "LandSquashFinished" }, // 3383075559
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_LandSquashUpdate, "LandSquashUpdate" }, // 3648626628
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_ManageCameraTransitions, "ManageCameraTransitions" }, // 1281494606
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_OnCoyoteTimeEnd, "OnCoyoteTimeEnd" }, // 2657618391
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_ResetDamageSoundTimer, "ResetDamageSoundTimer" }, // 376609028
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_ResetWallSlideSoundTimer, "ResetWallSlideSoundTimer" }, // 3208635789
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_ResetWasStomp, "ResetWasStomp" }, // 2970822474
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashFinished, "StompLandSquashFinished" }, // 3209178486
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_StompLandSquashUpdate, "StompLandSquashUpdate" }, // 1997411083
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxEndOverlap, "WallSlideDirectionBoxEndOverlap" }, // 2172602672
		{ &Z_Construct_UFunction_ATP_PlayerCharacter_WallSlideDirectionBoxOverlap, "WallSlideDirectionBoxOverlap" }, // 141357098
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraPosition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraPosition = { "dialogueCameraPosition", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, dialogueCameraPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraPosition_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bWallSliding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Sliding" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bWallSliding_SetBit(void* Obj)
	{
		((ATP_PlayerCharacter*)Obj)->bWallSliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bWallSliding = { "bWallSliding", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATP_PlayerCharacter), &Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bWallSliding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bWallSliding_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bWallSliding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bCanWallSlide_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bCanWallSlide_SetBit(void* Obj)
	{
		((ATP_PlayerCharacter*)Obj)->bCanWallSlide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bCanWallSlide = { "bCanWallSlide", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATP_PlayerCharacter), &Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bCanWallSlide_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bCanWallSlide_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bCanWallSlide_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_defaultAirControl_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_defaultAirControl = { "defaultAirControl", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, defaultAirControl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_defaultAirControl_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_defaultAirControl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_postWallJumpAirControl_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_postWallJumpAirControl = { "postWallJumpAirControl", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, postWallJumpAirControl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_postWallJumpAirControl_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_postWallJumpAirControl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airControlInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airControlInterpSpeed = { "airControlInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, airControlInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airControlInterpSpeed_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airControlInterpSpeed_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_slidingWallJumpModifier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Jump" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_slidingWallJumpModifier = { "slidingWallJumpModifier", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, slidingWallJumpModifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_slidingWallJumpModifier_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_slidingWallJumpModifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Jump" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce = { "upwardWallForce", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, upwardWallForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideDirectionCheckBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Jump" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideDirectionCheckBox = { "wallSlideDirectionCheckBox", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, wallSlideDirectionCheckBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideDirectionCheckBox_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideDirectionCheckBox_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraAirDashFOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraAirDashFOV = { "cameraAirDashFOV", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, cameraAirDashFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraAirDashFOV_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraAirDashFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV = { "currentCameraFOV", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, currentCameraFOV), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintFOVInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintFOVInterpSpeed = { "sprintFOVInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, sprintFOVInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintFOVInterpSpeed_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintFOVInterpSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashFOVInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashFOVInterpSpeed = { "airDashFOVInterpSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, airDashFOVInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashFOVInterpSpeed_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashFOVInterpSpeed_MetaData) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_coyoteTimeLimit_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_PlayerCharacter" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_coyoteTimeLimit = { "coyoteTimeLimit", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, coyoteTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_coyoteTimeLimit_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_coyoteTimeLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Sliding" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRate = { "wallSlideRate", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, wallSlideRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRate_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_startingWallSlideRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Sliding" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_startingWallSlideRate = { "startingWallSlideRate", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, startingWallSlideRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_startingWallSlideRate_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_startingWallSlideRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_minWallSlideRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Sliding" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_minWallSlideRate = { "minWallSlideRate", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, minWallSlideRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_minWallSlideRate_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_minWallSlideRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRateChangeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Sliding" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRateChangeSpeed = { "wallSlideRateChangeSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, wallSlideRateChangeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRateChangeSpeed_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRateChangeSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Wall Sliding" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckDistance = { "wallSlideCheckDistance", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, wallSlideCheckDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckDistance_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckRate_MetaData[] = {
		{ "Category", "Wall Sliding" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckRate = { "wallSlideCheckRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, wallSlideCheckRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckRate_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_initialWallSlideCheckDelay_MetaData[] = {
		{ "Category", "Wall Sliding" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_initialWallSlideCheckDelay = { "initialWallSlideCheckDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, initialWallSlideCheckDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_initialWallSlideCheckDelay_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_initialWallSlideCheckDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingTimeThreshold_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingTimeThreshold = { "aimingTimeThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, aimingTimeThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingTimeThreshold_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingTimeThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingDirection_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingDirection = { "aimingDirection", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, aimingDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingDirection_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerChargeOverlapBox_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Player Charge Box\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Charge Box" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerChargeOverlapBox = { "playerChargeOverlapBox", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerChargeOverlapBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerChargeOverlapBox_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerChargeOverlapBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileThrowPoint_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileThrowPoint = { "projectileThrowPoint", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, projectileThrowPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileThrowPoint_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileThrowPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileClass_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileClass = { "projectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, projectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATP_BaseProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileClass_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckPoint_MetaData[] = {
		{ "Category", "Ladder Climbing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckPoint = { "groundCheckPoint", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, groundCheckPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckPoint_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckLength_MetaData[] = {
		{ "Category", "Ladder Climbing" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckLength = { "groundCheckLength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, groundCheckLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckLength_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_chargeKnockbackModifier_MetaData[] = {
		{ "Category", "Charging" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_chargeKnockbackModifier = { "chargeKnockbackModifier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, chargeKnockbackModifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_chargeKnockbackModifier_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_chargeKnockbackModifier_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileAttackSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Sound Effects" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileAttackSound = { "projectileAttackSound", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, projectileAttackSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileAttackSound_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileAttackSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerJumpSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Sound Effects" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerJumpSound = { "playerJumpSound", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerJumpSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerJumpSound_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerJumpSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Sound Effects" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSound = { "playerDamageSound", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerDamageSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSound_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerNormalLandingSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Sound Effects" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerNormalLandingSound = { "playerNormalLandingSound", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerNormalLandingSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerNormalLandingSound_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerNormalLandingSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerStompLandingSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Sound Effects" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerStompLandingSound = { "playerStompLandingSound", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerStompLandingSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerStompLandingSound_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerStompLandingSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerAirDashSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Sound Effects" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerAirDashSound = { "playerAirDashSound", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerAirDashSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerAirDashSound_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerAirDashSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallJumpSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Sound Effects" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallJumpSound = { "playerWallJumpSound", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerWallJumpSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallJumpSound_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallJumpSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallSlideSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Sound Effects" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallSlideSound = { "playerWallSlideSound", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerWallSlideSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallSlideSound_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallSlideSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDeathSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Player Sound Effects" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDeathSound = { "playerDeathSound", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerDeathSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDeathSound_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDeathSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideSoundResetTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound Effect Properties" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideSoundResetTime = { "wallSlideSoundResetTime", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, wallSlideSoundResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideSoundResetTime_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideSoundResetTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSoundResetTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sound Effect Properties" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSoundResetTime = { "playerDamageSoundResetTime", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, playerDamageSoundResetTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSoundResetTime_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSoundResetTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_interactOverlapSphere_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_interactOverlapSphere = { "interactOverlapSphere", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, interactOverlapSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_interactOverlapSphere_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_interactOverlapSphere_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraClass_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraClass = { "dialogueCameraClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, dialogueCameraClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraClass_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendTime_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendTime = { "dialogueCamBlendTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, dialogueCamBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendTime_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendExponent_MetaData[] = {
		{ "Category", "TP_PlayerCharacter" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendExponent = { "dialogueCamBlendExponent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, dialogueCamBlendExponent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendExponent_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendExponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompCameraShake_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompCameraShake = { "stompCameraShake", nullptr, (EPropertyFlags)0x0044000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, stompCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompCameraShake_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompCameraShake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCameraShake_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "TP_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCameraShake = { "airDashCameraShake", nullptr, (EPropertyFlags)0x0044000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_PlayerCharacter, airDashCameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCameraShake_MetaData), Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCameraShake_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_PlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_mainCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bWallSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_bCanWallSlide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dashDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_maxAirDashes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_walkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStartInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintStopInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_defaultAirControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_postWallJumpAirControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airControlInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sphereCastPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallCheckDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_forwardWallForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_slidingWallJumpModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_upwardWallForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideDirectionCheckBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraDefaultFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraSprintFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_cameraAirDashFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_currentCameraFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_sprintFOVInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashFOVInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_baseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSqueezeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSqueezeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompLandSqueezeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_jumpSquashCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_landSquashCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_coyoteTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_startingWallSlideRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_minWallSlideRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideRateChangeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideCheckRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_initialWallSlideCheckDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingTimeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_aimingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerChargeOverlapBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileThrowPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_groundCheckLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_chargeKnockbackModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_projectileAttackSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerJumpSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerNormalLandingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerStompLandingSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerAirDashSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallJumpSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerWallSlideSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDeathSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_wallSlideSoundResetTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_playerDamageSoundResetTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_interactOverlapSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCameraClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_dialogueCamBlendExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_stompCameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_PlayerCharacter_Statics::NewProp_airDashCameraShake,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATP_PlayerCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerCharacterInterface_NoRegister, (int32)VTABLE_OFFSET(ATP_PlayerCharacter, IPlayerCharacterInterface), false },  // 2404680748
			{ Z_Construct_UClass_UTPDamageInterface_NoRegister, (int32)VTABLE_OFFSET(ATP_PlayerCharacter, ITPDamageInterface), false },  // 1129312699
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::InterfaceParams) < 64);
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
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_PlayerCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics::EnumInfo[] = {
		{ EPlayerStates_StaticEnum, TEXT("EPlayerStates"), &Z_Registration_Info_UEnum_EPlayerStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 845008250U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_PlayerCharacter, ATP_PlayerCharacter::StaticClass, TEXT("ATP_PlayerCharacter"), &Z_Registration_Info_UClass_ATP_PlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_PlayerCharacter), 2485935267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_68241750(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_PlayerCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
