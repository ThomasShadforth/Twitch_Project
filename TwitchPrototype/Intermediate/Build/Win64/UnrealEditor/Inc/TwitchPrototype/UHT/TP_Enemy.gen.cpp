// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/TP_Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_Enemy() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_AAIPatrolPath_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_BaseProjectile_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_Enemy();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_Enemy_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATPCharacterBase();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UStompInterface_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPChargeInterface_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPDamageInterface_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPEnemyInterface_NoRegister();
	TWITCHPROTOTYPE_API UEnum* Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ATP_Enemy::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEnemyAIStates*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execSetStateAsRetreat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStateAsRetreat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execSetStateAsCower)
	{
		P_GET_OBJECT(AActor,Z_Param_playerTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStateAsCower(Z_Param_playerTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execSetStateAsAttack)
	{
		P_GET_OBJECT(AActor,Z_Param_attackTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStateAsAttack(Z_Param_attackTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execSetStateAsPassive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStateAsPassive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execFinishRetreating)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishRetreating();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execGetEnemyPatrolPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAIPatrolPath**)Z_Param__Result=P_THIS->GetEnemyPatrolPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execPlayDeathMontage)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDeathMontage(Z_Param_SectionName,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execPlayHitAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHitAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execPlayDeathAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDeathAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execApplyGameplayEffectToTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyGameplayEffectToTarget(Z_Param_TargetActor,Z_Param_GameplayEffectClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execPlayAttackMontage)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAttackMontage(Z_Param_SectionName,Z_Param_PlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_Enemy::execHandleHealthZero)
	{
		P_GET_OBJECT(UAttributeSet,Z_Param_InAttributeSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHealthZero(Z_Param_InAttributeSet);
		P_NATIVE_END;
	}
	void ATP_Enemy::StaticRegisterNativesATP_Enemy()
	{
		UClass* Class = ATP_Enemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyGameplayEffectToTarget", &ATP_Enemy::execApplyGameplayEffectToTarget },
			{ "FinishRetreating", &ATP_Enemy::execFinishRetreating },
			{ "GetCurrentState", &ATP_Enemy::execGetCurrentState },
			{ "GetEnemyPatrolPath", &ATP_Enemy::execGetEnemyPatrolPath },
			{ "HandleHealthZero", &ATP_Enemy::execHandleHealthZero },
			{ "PlayAttackMontage", &ATP_Enemy::execPlayAttackMontage },
			{ "PlayDeathAnim", &ATP_Enemy::execPlayDeathAnim },
			{ "PlayDeathMontage", &ATP_Enemy::execPlayDeathMontage },
			{ "PlayHitAnim", &ATP_Enemy::execPlayHitAnim },
			{ "SetStateAsAttack", &ATP_Enemy::execSetStateAsAttack },
			{ "SetStateAsCower", &ATP_Enemy::execSetStateAsCower },
			{ "SetStateAsPassive", &ATP_Enemy::execSetStateAsPassive },
			{ "SetStateAsRetreat", &ATP_Enemy::execSetStateAsRetreat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics
	{
		struct TP_Enemy_eventApplyGameplayEffectToTarget_Parms
		{
			AActor* TargetActor;
			TSubclassOf<UGameplayEffect>  GameplayEffectClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventApplyGameplayEffectToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventApplyGameplayEffectToTarget_Parms, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::NewProp_GameplayEffectClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "ApplyGameplayEffectToTarget", nullptr, nullptr, Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::TP_Enemy_eventApplyGameplayEffectToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::TP_Enemy_eventApplyGameplayEffectToTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_FinishRetreating_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_FinishRetreating_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_FinishRetreating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "FinishRetreating", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_FinishRetreating_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_FinishRetreating_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_Enemy_FinishRetreating()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_FinishRetreating_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics
	{
		struct TP_Enemy_eventGetCurrentState_Parms
		{
			EEnemyAIStates ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_TwitchPrototype_EEnemyAIStates, METADATA_PARAMS(0, nullptr) }; // 3919731625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "GetCurrentState", nullptr, nullptr, Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::TP_Enemy_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::TP_Enemy_eventGetCurrentState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_Enemy_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics
	{
		struct TP_Enemy_eventGetEnemyPatrolPath_Parms
		{
			AAIPatrolPath* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventGetEnemyPatrolPath_Parms, ReturnValue), Z_Construct_UClass_AAIPatrolPath_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "GetEnemyPatrolPath", nullptr, nullptr, Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::TP_Enemy_eventGetEnemyPatrolPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::TP_Enemy_eventGetEnemyPatrolPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics
	{
		struct TP_Enemy_eventHandleHealthZero_Parms
		{
			UAttributeSet* InAttributeSet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::NewProp_InAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::NewProp_InAttributeSet = { "InAttributeSet", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventHandleHealthZero_Parms, InAttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::NewProp_InAttributeSet_MetaData), Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::NewProp_InAttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::NewProp_InAttributeSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "HandleHealthZero", nullptr, nullptr, Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::TP_Enemy_eventHandleHealthZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::TP_Enemy_eventHandleHealthZero_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_Enemy_HandleHealthZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_HandleHealthZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics
	{
		struct TP_Enemy_eventPlayAttackMontage_Parms
		{
			FName SectionName;
			float PlayRate;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventPlayAttackMontage_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventPlayAttackMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "PlayAttackMontage", nullptr, nullptr, Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::TP_Enemy_eventPlayAttackMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::TP_Enemy_eventPlayAttackMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_PlayDeathAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_PlayDeathAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_PlayDeathAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "PlayDeathAnim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_PlayDeathAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_PlayDeathAnim_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_Enemy_PlayDeathAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_PlayDeathAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics
	{
		struct TP_Enemy_eventPlayDeathMontage_Parms
		{
			FName SectionName;
			float PlayRate;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventPlayDeathMontage_Parms, SectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventPlayDeathMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::NewProp_PlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "PlayDeathMontage", nullptr, nullptr, Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::TP_Enemy_eventPlayDeathMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::TP_Enemy_eventPlayDeathMontage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_PlayHitAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_PlayHitAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_PlayHitAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "PlayHitAnim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_PlayHitAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_PlayHitAnim_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_Enemy_PlayHitAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_PlayHitAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics
	{
		struct TP_Enemy_eventSetStateAsAttack_Parms
		{
			AActor* attackTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attackTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::NewProp_attackTarget = { "attackTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventSetStateAsAttack_Parms, attackTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::NewProp_attackTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "SetStateAsAttack", nullptr, nullptr, Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::TP_Enemy_eventSetStateAsAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::TP_Enemy_eventSetStateAsAttack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics
	{
		struct TP_Enemy_eventSetStateAsCower_Parms
		{
			AActor* playerTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::NewProp_playerTarget = { "playerTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_Enemy_eventSetStateAsCower_Parms, playerTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::NewProp_playerTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "SetStateAsCower", nullptr, nullptr, Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::TP_Enemy_eventSetStateAsCower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::TP_Enemy_eventSetStateAsCower_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_Enemy_SetStateAsCower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_SetStateAsCower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_SetStateAsPassive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_SetStateAsPassive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_SetStateAsPassive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "SetStateAsPassive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_SetStateAsPassive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_SetStateAsPassive_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_Enemy_SetStateAsPassive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_SetStateAsPassive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_Enemy_SetStateAsRetreat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_Enemy_SetStateAsRetreat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_Enemy_SetStateAsRetreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_Enemy, nullptr, "SetStateAsRetreat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_Enemy_SetStateAsRetreat_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_Enemy_SetStateAsRetreat_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATP_Enemy_SetStateAsRetreat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_Enemy_SetStateAsRetreat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_Enemy);
	UClass* Z_Construct_UClass_ATP_Enemy_NoRegister()
	{
		return ATP_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_ATP_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageGameplayEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_behaviourTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviourTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileFirePoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileFirePoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_enemyProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyPatrolPath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyPatrolPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateAIPerception_MetaData[];
#endif
		static void NewProp_bActivateAIPerception_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateAIPerception;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deathMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deathMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deathAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_deathAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hitAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_attackWaitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATPCharacterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_Enemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_Enemy_ApplyGameplayEffectToTarget, "ApplyGameplayEffectToTarget" }, // 1394252146
		{ &Z_Construct_UFunction_ATP_Enemy_FinishRetreating, "FinishRetreating" }, // 281380106
		{ &Z_Construct_UFunction_ATP_Enemy_GetCurrentState, "GetCurrentState" }, // 3949060708
		{ &Z_Construct_UFunction_ATP_Enemy_GetEnemyPatrolPath, "GetEnemyPatrolPath" }, // 4190105828
		{ &Z_Construct_UFunction_ATP_Enemy_HandleHealthZero, "HandleHealthZero" }, // 3954869469
		{ &Z_Construct_UFunction_ATP_Enemy_PlayAttackMontage, "PlayAttackMontage" }, // 2926617491
		{ &Z_Construct_UFunction_ATP_Enemy_PlayDeathAnim, "PlayDeathAnim" }, // 48110795
		{ &Z_Construct_UFunction_ATP_Enemy_PlayDeathMontage, "PlayDeathMontage" }, // 623577349
		{ &Z_Construct_UFunction_ATP_Enemy_PlayHitAnim, "PlayHitAnim" }, // 665046313
		{ &Z_Construct_UFunction_ATP_Enemy_SetStateAsAttack, "SetStateAsAttack" }, // 1998579877
		{ &Z_Construct_UFunction_ATP_Enemy_SetStateAsCower, "SetStateAsCower" }, // 1430423860
		{ &Z_Construct_UFunction_ATP_Enemy_SetStateAsPassive, "SetStateAsPassive" }, // 1792655226
		{ &Z_Construct_UFunction_ATP_Enemy_SetStateAsRetreat, "SetStateAsRetreat" }, // 531473710
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_Enemy.h" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_DamageGameplayEffect_MetaData[] = {
		{ "Category", "TP_Enemy" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_DamageGameplayEffect = { "DamageGameplayEffect", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, DamageGameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_DamageGameplayEffect_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_DamageGameplayEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Behaviour Tree" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree = { "behaviourTree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, behaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_projectileFirePoint_MetaData[] = {
		{ "Category", "TP_Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_projectileFirePoint = { "projectileFirePoint", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, projectileFirePoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_projectileFirePoint_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_projectileFirePoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyProjectileClass_MetaData[] = {
		{ "Category", "TP_Enemy" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyProjectileClass = { "enemyProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, enemyProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATP_BaseProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyProjectileClass_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyProjectileClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyPatrolPath_MetaData[] = {
		{ "Category", "TP_Enemy" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyPatrolPath = { "enemyPatrolPath", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, enemyPatrolPath), Z_Construct_UClass_AAIPatrolPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyPatrolPath_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyPatrolPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_bActivateAIPerception_MetaData[] = {
		{ "Category", "TP_Enemy" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	void Z_Construct_UClass_ATP_Enemy_Statics::NewProp_bActivateAIPerception_SetBit(void* Obj)
	{
		((ATP_Enemy*)Obj)->bActivateAIPerception = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_bActivateAIPerception = { "bActivateAIPerception", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATP_Enemy), &Z_Construct_UClass_ATP_Enemy_Statics::NewProp_bActivateAIPerception_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_bActivateAIPerception_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_bActivateAIPerception_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackMontage = { "attackMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, attackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackMontage_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathMontage = { "deathMontage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, deathMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathMontage_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathAnim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathAnim = { "deathAnim", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, deathAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathAnim_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_hitAnim_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_hitAnim = { "hitAnim", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, hitAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_hitAnim_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_hitAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackWaitTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackWaitTime = { "attackWaitTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, attackWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackWaitTime_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackWaitTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_Enemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_DamageGameplayEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_projectileFirePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_enemyPatrolPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_bActivateAIPerception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_deathAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_hitAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_attackWaitTime,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATP_Enemy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTPEnemyInterface_NoRegister, (int32)VTABLE_OFFSET(ATP_Enemy, ITPEnemyInterface), false },  // 3891249123
			{ Z_Construct_UClass_UStompInterface_NoRegister, (int32)VTABLE_OFFSET(ATP_Enemy, IStompInterface), false },  // 414902198
			{ Z_Construct_UClass_UTPChargeInterface_NoRegister, (int32)VTABLE_OFFSET(ATP_Enemy, ITPChargeInterface), false },  // 2543199158
			{ Z_Construct_UClass_UTPDamageInterface_NoRegister, (int32)VTABLE_OFFSET(ATP_Enemy, ITPDamageInterface), false },  // 3452675525
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_Enemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_Enemy_Statics::ClassParams = {
		&ATP_Enemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_Enemy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_Enemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_Enemy()
	{
		if (!Z_Registration_Info_UClass_ATP_Enemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_Enemy.OuterSingleton, Z_Construct_UClass_ATP_Enemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_Enemy.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_Enemy>()
	{
		return ATP_Enemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_Enemy);
	ATP_Enemy::~ATP_Enemy() {}
	struct Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_Enemy, ATP_Enemy::StaticClass, TEXT("ATP_Enemy"), &Z_Registration_Info_UClass_ATP_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_Enemy), 669980108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_360989932(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
