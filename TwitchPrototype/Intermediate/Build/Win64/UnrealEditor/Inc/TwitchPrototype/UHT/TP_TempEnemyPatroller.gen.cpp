// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/TP_TempEnemyPatroller.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_TempEnemyPatroller() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_Enemy();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_TempEnemyPatroller();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_TempEnemyPatroller_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ATP_TempEnemyPatroller::execAggroSphereEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AggroSphereEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_TempEnemyPatroller::execAggroSphereBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AggroSphereBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ATP_TempEnemyPatroller::StaticRegisterNativesATP_TempEnemyPatroller()
	{
		UClass* Class = ATP_TempEnemyPatroller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AggroSphereBeginOverlap", &ATP_TempEnemyPatroller::execAggroSphereBeginOverlap },
			{ "AggroSphereEndOverlap", &ATP_TempEnemyPatroller::execAggroSphereEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics
	{
		struct TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms), &Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_TempEnemyPatroller.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_TempEnemyPatroller, nullptr, "AggroSphereBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::TP_TempEnemyPatroller_eventAggroSphereBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics
	{
		struct TP_TempEnemyPatroller_eventAggroSphereEndOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_TempEnemyPatroller_eventAggroSphereEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_TempEnemyPatroller_eventAggroSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_TempEnemyPatroller_eventAggroSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_TempEnemyPatroller_eventAggroSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_TempEnemyPatroller.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_TempEnemyPatroller, nullptr, "AggroSphereEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::TP_TempEnemyPatroller_eventAggroSphereEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::TP_TempEnemyPatroller_eventAggroSphereEndOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_TempEnemyPatroller);
	UClass* Z_Construct_UClass_ATP_TempEnemyPatroller_NoRegister()
	{
		return ATP_TempEnemyPatroller::StaticClass();
	}
	struct Z_Construct_UClass_ATP_TempEnemyPatroller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_patrolPoint1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_patrolPoint1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_patrolPoint2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_patrolPoint2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aggroSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aggroSphere;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATP_Enemy,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereBeginOverlap, "AggroSphereBeginOverlap" }, // 765898558
		{ &Z_Construct_UFunction_ATP_TempEnemyPatroller_AggroSphereEndOverlap, "AggroSphereEndOverlap" }, // 2060312203
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_TempEnemyPatroller.h" },
		{ "ModuleRelativePath", "TP_TempEnemyPatroller.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behaviour Tree" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "TP_TempEnemyPatroller.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint1 = { "patrolPoint1", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TempEnemyPatroller, patrolPoint1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint1_MetaData), Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behaviour Tree" },
		{ "MakeEditWidget", "true" },
		{ "ModuleRelativePath", "TP_TempEnemyPatroller.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint2 = { "patrolPoint2", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TempEnemyPatroller, patrolPoint2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint2_MetaData), Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_aggroSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Behaviour Tree" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_TempEnemyPatroller.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_aggroSphere = { "aggroSphere", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_TempEnemyPatroller, aggroSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_aggroSphere_MetaData), Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_aggroSphere_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_patrolPoint2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::NewProp_aggroSphere,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_TempEnemyPatroller>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::ClassParams = {
		&ATP_TempEnemyPatroller::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_TempEnemyPatroller()
	{
		if (!Z_Registration_Info_UClass_ATP_TempEnemyPatroller.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_TempEnemyPatroller.OuterSingleton, Z_Construct_UClass_ATP_TempEnemyPatroller_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_TempEnemyPatroller.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_TempEnemyPatroller>()
	{
		return ATP_TempEnemyPatroller::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_TempEnemyPatroller);
	ATP_TempEnemyPatroller::~ATP_TempEnemyPatroller() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_TempEnemyPatroller_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_TempEnemyPatroller_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_TempEnemyPatroller, ATP_TempEnemyPatroller::StaticClass, TEXT("ATP_TempEnemyPatroller"), &Z_Registration_Info_UClass_ATP_TempEnemyPatroller, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_TempEnemyPatroller), 3004902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_TempEnemyPatroller_h_3573127520(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_TempEnemyPatroller_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_TempEnemyPatroller_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
