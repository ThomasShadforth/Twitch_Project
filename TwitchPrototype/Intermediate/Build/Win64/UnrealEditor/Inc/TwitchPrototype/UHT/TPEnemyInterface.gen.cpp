// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/TPEnemyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPEnemyInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_AAIPatrolPath_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_BaseProjectile_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPEnemyInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPEnemyInterface_NoRegister();
	TWITCHPROTOTYPE_API UEnum* Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ITPEnemyInterface::execGetEnemyProjectileClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ATP_BaseProjectile> *)Z_Param__Result=P_THIS->GetEnemyProjectileClass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITPEnemyInterface::execGetProjectileFirePoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetProjectileFirePoint_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITPEnemyInterface::execDamageEnemy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageEnemy_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITPEnemyInterface::execGetShouldActivatePerception)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShouldActivatePerception_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITPEnemyInterface::execSetMoveSpeed)
	{
		P_GET_ENUM(EMoveSpeedTypes,Z_Param_speedType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoveSpeed_Implementation(EMoveSpeedTypes(Z_Param_speedType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITPEnemyInterface::execGetPatrolRoute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAIPatrolPath**)Z_Param__Result=P_THIS->GetPatrolRoute_Implementation();
		P_NATIVE_END;
	}
	struct TPEnemyInterface_eventGetEnemyProjectileClass_Parms
	{
		TSubclassOf<ATP_BaseProjectile>  ReturnValue;

		/** Constructor, initializes return property only **/
		TPEnemyInterface_eventGetEnemyProjectileClass_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct TPEnemyInterface_eventGetPatrolRoute_Parms
	{
		AAIPatrolPath* ReturnValue;

		/** Constructor, initializes return property only **/
		TPEnemyInterface_eventGetPatrolRoute_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct TPEnemyInterface_eventGetProjectileFirePoint_Parms
	{
		USceneComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		TPEnemyInterface_eventGetProjectileFirePoint_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct TPEnemyInterface_eventGetShouldActivatePerception_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TPEnemyInterface_eventGetShouldActivatePerception_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct TPEnemyInterface_eventSetMoveSpeed_Parms
	{
		EMoveSpeedTypes speedType;
	};
	void ITPEnemyInterface::DamageEnemy()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DamageEnemy instead.");
	}
	TSubclassOf<ATP_BaseProjectile>  ITPEnemyInterface::GetEnemyProjectileClass()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEnemyProjectileClass instead.");
		TPEnemyInterface_eventGetEnemyProjectileClass_Parms Parms;
		return Parms.ReturnValue;
	}
	AAIPatrolPath* ITPEnemyInterface::GetPatrolRoute()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPatrolRoute instead.");
		TPEnemyInterface_eventGetPatrolRoute_Parms Parms;
		return Parms.ReturnValue;
	}
	USceneComponent* ITPEnemyInterface::GetProjectileFirePoint()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetProjectileFirePoint instead.");
		TPEnemyInterface_eventGetProjectileFirePoint_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITPEnemyInterface::GetShouldActivatePerception()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetShouldActivatePerception instead.");
		TPEnemyInterface_eventGetShouldActivatePerception_Parms Parms;
		return Parms.ReturnValue;
	}
	void ITPEnemyInterface::SetMoveSpeed(EMoveSpeedTypes speedType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetMoveSpeed instead.");
	}
	void UTPEnemyInterface::StaticRegisterNativesUTPEnemyInterface()
	{
		UClass* Class = UTPEnemyInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageEnemy", &ITPEnemyInterface::execDamageEnemy },
			{ "GetEnemyProjectileClass", &ITPEnemyInterface::execGetEnemyProjectileClass },
			{ "GetPatrolRoute", &ITPEnemyInterface::execGetPatrolRoute },
			{ "GetProjectileFirePoint", &ITPEnemyInterface::execGetProjectileFirePoint },
			{ "GetShouldActivatePerception", &ITPEnemyInterface::execGetShouldActivatePerception },
			{ "SetMoveSpeed", &ITPEnemyInterface::execSetMoveSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPEnemyInterface_DamageEnemy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPEnemyInterface_DamageEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPEnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPEnemyInterface_DamageEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPEnemyInterface, nullptr, "DamageEnemy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_DamageEnemy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPEnemyInterface_DamageEnemy_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTPEnemyInterface_DamageEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPEnemyInterface_DamageEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPEnemyInterface_eventGetEnemyProjectileClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ATP_BaseProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPEnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPEnemyInterface, nullptr, "GetEnemyProjectileClass", nullptr, nullptr, Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::PropPointers), sizeof(TPEnemyInterface_eventGetEnemyProjectileClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPEnemyInterface_eventGetEnemyProjectileClass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPEnemyInterface_eventGetPatrolRoute_Parms, ReturnValue), Z_Construct_UClass_AAIPatrolPath_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPEnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPEnemyInterface, nullptr, "GetPatrolRoute", nullptr, nullptr, Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::PropPointers), sizeof(TPEnemyInterface_eventGetPatrolRoute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPEnemyInterface_eventGetPatrolRoute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPEnemyInterface_eventGetProjectileFirePoint_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPEnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPEnemyInterface, nullptr, "GetProjectileFirePoint", nullptr, nullptr, Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::PropPointers), sizeof(TPEnemyInterface_eventGetProjectileFirePoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPEnemyInterface_eventGetProjectileFirePoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TPEnemyInterface_eventGetShouldActivatePerception_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TPEnemyInterface_eventGetShouldActivatePerception_Parms), &Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPEnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPEnemyInterface, nullptr, "GetShouldActivatePerception", nullptr, nullptr, Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::PropPointers), sizeof(TPEnemyInterface_eventGetShouldActivatePerception_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPEnemyInterface_eventGetShouldActivatePerception_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_speedType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_speedType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::NewProp_speedType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::NewProp_speedType = { "speedType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPEnemyInterface_eventSetMoveSpeed_Parms, speedType), Z_Construct_UEnum_TwitchPrototype_EMoveSpeedTypes, METADATA_PARAMS(0, nullptr) }; // 1366844636
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::NewProp_speedType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::NewProp_speedType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPEnemyInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPEnemyInterface, nullptr, "SetMoveSpeed", nullptr, nullptr, Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::PropPointers), sizeof(TPEnemyInterface_eventSetMoveSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPEnemyInterface_eventSetMoveSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPEnemyInterface);
	UClass* Z_Construct_UClass_UTPEnemyInterface_NoRegister()
	{
		return UTPEnemyInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTPEnemyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPEnemyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPEnemyInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPEnemyInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPEnemyInterface_DamageEnemy, "DamageEnemy" }, // 3681234433
		{ &Z_Construct_UFunction_UTPEnemyInterface_GetEnemyProjectileClass, "GetEnemyProjectileClass" }, // 2955315243
		{ &Z_Construct_UFunction_UTPEnemyInterface_GetPatrolRoute, "GetPatrolRoute" }, // 1400525663
		{ &Z_Construct_UFunction_UTPEnemyInterface_GetProjectileFirePoint, "GetProjectileFirePoint" }, // 3501980263
		{ &Z_Construct_UFunction_UTPEnemyInterface_GetShouldActivatePerception, "GetShouldActivatePerception" }, // 948669425
		{ &Z_Construct_UFunction_UTPEnemyInterface_SetMoveSpeed, "SetMoveSpeed" }, // 716427121
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPEnemyInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPEnemyInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TPEnemyInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPEnemyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITPEnemyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPEnemyInterface_Statics::ClassParams = {
		&UTPEnemyInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPEnemyInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPEnemyInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTPEnemyInterface()
	{
		if (!Z_Registration_Info_UClass_UTPEnemyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPEnemyInterface.OuterSingleton, Z_Construct_UClass_UTPEnemyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPEnemyInterface.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPEnemyInterface>()
	{
		return UTPEnemyInterface::StaticClass();
	}
	UTPEnemyInterface::UTPEnemyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPEnemyInterface);
	UTPEnemyInterface::~UTPEnemyInterface() {}
	static FName NAME_UTPEnemyInterface_DamageEnemy = FName(TEXT("DamageEnemy"));
	void ITPEnemyInterface::Execute_DamageEnemy(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPEnemyInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTPEnemyInterface_DamageEnemy);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITPEnemyInterface*)(O->GetNativeInterfaceAddress(UTPEnemyInterface::StaticClass())))
		{
			I->DamageEnemy_Implementation();
		}
	}
	static FName NAME_UTPEnemyInterface_GetEnemyProjectileClass = FName(TEXT("GetEnemyProjectileClass"));
	TSubclassOf<ATP_BaseProjectile>  ITPEnemyInterface::Execute_GetEnemyProjectileClass(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPEnemyInterface::StaticClass()));
		TPEnemyInterface_eventGetEnemyProjectileClass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTPEnemyInterface_GetEnemyProjectileClass);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITPEnemyInterface*)(O->GetNativeInterfaceAddress(UTPEnemyInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetEnemyProjectileClass_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTPEnemyInterface_GetPatrolRoute = FName(TEXT("GetPatrolRoute"));
	AAIPatrolPath* ITPEnemyInterface::Execute_GetPatrolRoute(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPEnemyInterface::StaticClass()));
		TPEnemyInterface_eventGetPatrolRoute_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTPEnemyInterface_GetPatrolRoute);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITPEnemyInterface*)(O->GetNativeInterfaceAddress(UTPEnemyInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPatrolRoute_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTPEnemyInterface_GetProjectileFirePoint = FName(TEXT("GetProjectileFirePoint"));
	USceneComponent* ITPEnemyInterface::Execute_GetProjectileFirePoint(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPEnemyInterface::StaticClass()));
		TPEnemyInterface_eventGetProjectileFirePoint_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTPEnemyInterface_GetProjectileFirePoint);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITPEnemyInterface*)(O->GetNativeInterfaceAddress(UTPEnemyInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetProjectileFirePoint_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTPEnemyInterface_GetShouldActivatePerception = FName(TEXT("GetShouldActivatePerception"));
	bool ITPEnemyInterface::Execute_GetShouldActivatePerception(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPEnemyInterface::StaticClass()));
		TPEnemyInterface_eventGetShouldActivatePerception_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTPEnemyInterface_GetShouldActivatePerception);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITPEnemyInterface*)(O->GetNativeInterfaceAddress(UTPEnemyInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetShouldActivatePerception_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTPEnemyInterface_SetMoveSpeed = FName(TEXT("SetMoveSpeed"));
	void ITPEnemyInterface::Execute_SetMoveSpeed(UObject* O, EMoveSpeedTypes speedType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPEnemyInterface::StaticClass()));
		TPEnemyInterface_eventSetMoveSpeed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTPEnemyInterface_SetMoveSpeed);
		if (Func)
		{
			Parms.speedType=speedType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITPEnemyInterface*)(O->GetNativeInterfaceAddress(UTPEnemyInterface::StaticClass())))
		{
			I->SetMoveSpeed_Implementation(speedType);
		}
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPEnemyInterface, UTPEnemyInterface::StaticClass, TEXT("UTPEnemyInterface"), &Z_Registration_Info_UClass_UTPEnemyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPEnemyInterface), 3891249123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_1293918009(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TPEnemyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
