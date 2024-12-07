// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/AIPatrolPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPatrolPath() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_AAIPatrolPath();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_AAIPatrolPath_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(AAIPatrolPath::execGetSplinePointAsWorldPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSplinePointAsWorldPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIPatrolPath::execIncrementRetreatIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IncrementRetreatIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIPatrolPath::execIncrementPatrolIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementPatrolIndex();
		P_NATIVE_END;
	}
	void AAIPatrolPath::StaticRegisterNativesAAIPatrolPath()
	{
		UClass* Class = AAIPatrolPath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSplinePointAsWorldPosition", &AAIPatrolPath::execGetSplinePointAsWorldPosition },
			{ "IncrementPatrolIndex", &AAIPatrolPath::execIncrementPatrolIndex },
			{ "IncrementRetreatIndex", &AAIPatrolPath::execIncrementRetreatIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics
	{
		struct AIPatrolPath_eventGetSplinePointAsWorldPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIPatrolPath_eventGetSplinePointAsWorldPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIPatrolPath, nullptr, "GetSplinePointAsWorldPosition", nullptr, nullptr, Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::AIPatrolPath_eventGetSplinePointAsWorldPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::AIPatrolPath_eventGetSplinePointAsWorldPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIPatrolPath_IncrementPatrolIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIPatrolPath_IncrementPatrolIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIPatrolPath_IncrementPatrolIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIPatrolPath, nullptr, "IncrementPatrolIndex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIPatrolPath_IncrementPatrolIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIPatrolPath_IncrementPatrolIndex_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AAIPatrolPath_IncrementPatrolIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIPatrolPath_IncrementPatrolIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics
	{
		struct AIPatrolPath_eventIncrementRetreatIndex_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIPatrolPath_eventIncrementRetreatIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIPatrolPath_eventIncrementRetreatIndex_Parms), &Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIPatrolPath, nullptr, "IncrementRetreatIndex", nullptr, nullptr, Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::AIPatrolPath_eventIncrementRetreatIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::AIPatrolPath_eventIncrementRetreatIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIPatrolPath);
	UClass* Z_Construct_UClass_AAIPatrolPath_NoRegister()
	{
		return AAIPatrolPath::StaticClass();
	}
	struct Z_Construct_UClass_AAIPatrolPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_patrolRoute_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_patrolRoute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWillLoop_MetaData[];
#endif
		static void NewProp_bWillLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWillLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPatrolPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPath_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIPatrolPath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIPatrolPath_GetSplinePointAsWorldPosition, "GetSplinePointAsWorldPosition" }, // 298388123
		{ &Z_Construct_UFunction_AAIPatrolPath_IncrementPatrolIndex, "IncrementPatrolIndex" }, // 486253713
		{ &Z_Construct_UFunction_AAIPatrolPath_IncrementRetreatIndex, "IncrementRetreatIndex" }, // 3492862583
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPath_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrolPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIPatrolPath.h" },
		{ "ModuleRelativePath", "Public/AIPatrolPath.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "AIPatrolPath" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/AIPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPatrolPath, direction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_direction_MetaData), Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_direction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_patrolRoute_MetaData[] = {
		{ "Category", "AIPatrolPath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AIPatrolPath.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_patrolRoute = { "patrolRoute", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIPatrolPath, patrolRoute), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_patrolRoute_MetaData), Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_patrolRoute_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_bWillLoop_MetaData[] = {
		{ "Category", "AIPatrolPath" },
		{ "ModuleRelativePath", "Public/AIPatrolPath.h" },
	};
#endif
	void Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_bWillLoop_SetBit(void* Obj)
	{
		((AAIPatrolPath*)Obj)->bWillLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_bWillLoop = { "bWillLoop", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAIPatrolPath), &Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_bWillLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_bWillLoop_MetaData), Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_bWillLoop_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPatrolPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_patrolRoute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPatrolPath_Statics::NewProp_bWillLoop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPatrolPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPatrolPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIPatrolPath_Statics::ClassParams = {
		&AAIPatrolPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIPatrolPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPath_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIPatrolPath_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIPatrolPath_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAIPatrolPath()
	{
		if (!Z_Registration_Info_UClass_AAIPatrolPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIPatrolPath.OuterSingleton, Z_Construct_UClass_AAIPatrolPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIPatrolPath.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<AAIPatrolPath>()
	{
		return AAIPatrolPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPatrolPath);
	AAIPatrolPath::~AAIPatrolPath() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AIPatrolPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AIPatrolPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIPatrolPath, AAIPatrolPath::StaticClass, TEXT("AAIPatrolPath"), &Z_Registration_Info_UClass_AAIPatrolPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIPatrolPath), 3898927417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AIPatrolPath_h_1702689146(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AIPatrolPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AIPatrolPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
