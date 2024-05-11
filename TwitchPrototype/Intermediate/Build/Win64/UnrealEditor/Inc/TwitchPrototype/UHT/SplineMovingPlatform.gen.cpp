// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/SplineMovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMovingPlatform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ASplineMovingPlatform();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ASplineMovingPlatform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ASplineMovingPlatform::execMovementEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASplineMovingPlatform::execMovementUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementUpdate(Z_Param_Alpha);
		P_NATIVE_END;
	}
	void ASplineMovingPlatform::StaticRegisterNativesASplineMovingPlatform()
	{
		UClass* Class = ASplineMovingPlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MovementEnd", &ASplineMovingPlatform::execMovementEnd },
			{ "MovementUpdate", &ASplineMovingPlatform::execMovementUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplineMovingPlatform_MovementEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineMovingPlatform_MovementEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SplineMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineMovingPlatform_MovementEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineMovingPlatform, nullptr, "MovementEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMovingPlatform_MovementEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineMovingPlatform_MovementEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASplineMovingPlatform_MovementEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineMovingPlatform_MovementEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics
	{
		struct SplineMovingPlatform_eventMovementUpdate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplineMovingPlatform_eventMovementUpdate_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SplineMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineMovingPlatform, nullptr, "MovementUpdate", nullptr, nullptr, Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::SplineMovingPlatform_eventMovementUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::SplineMovingPlatform_eventMovementUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASplineMovingPlatform);
	UClass* Z_Construct_UClass_ASplineMovingPlatform_NoRegister()
	{
		return ASplineMovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_ASplineMovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_platformSplinePath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_platformSplinePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_affectedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_affectedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_movementCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timelineLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timelineLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineMovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovingPlatform_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplineMovingPlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplineMovingPlatform_MovementEnd, "MovementEnd" }, // 1253096726
		{ &Z_Construct_UFunction_ASplineMovingPlatform_MovementUpdate, "MovementUpdate" }, // 1234665690
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovingPlatform_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineMovingPlatform.h" },
		{ "ModuleRelativePath", "SplineMovingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_platformSplinePath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Platform Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SplineMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_platformSplinePath = { "platformSplinePath", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMovingPlatform, platformSplinePath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_platformSplinePath_MetaData), Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_platformSplinePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_affectedActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Platform Properties" },
		{ "ModuleRelativePath", "SplineMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_affectedActor = { "affectedActor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMovingPlatform, affectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_affectedActor_MetaData), Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_affectedActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_movementCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "SplineMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_movementCurve = { "movementCurve", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMovingPlatform, movementCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_movementCurve_MetaData), Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_movementCurve_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_timelineLength_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "SplineMovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_timelineLength = { "timelineLength", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineMovingPlatform, timelineLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_timelineLength_MetaData), Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_timelineLength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineMovingPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_platformSplinePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_affectedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_movementCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMovingPlatform_Statics::NewProp_timelineLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineMovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineMovingPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplineMovingPlatform_Statics::ClassParams = {
		&ASplineMovingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASplineMovingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ASplineMovingPlatform_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMovingPlatform_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASplineMovingPlatform()
	{
		if (!Z_Registration_Info_UClass_ASplineMovingPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplineMovingPlatform.OuterSingleton, Z_Construct_UClass_ASplineMovingPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASplineMovingPlatform.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ASplineMovingPlatform>()
	{
		return ASplineMovingPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineMovingPlatform);
	ASplineMovingPlatform::~ASplineMovingPlatform() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_SplineMovingPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_SplineMovingPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASplineMovingPlatform, ASplineMovingPlatform::StaticClass, TEXT("ASplineMovingPlatform"), &Z_Registration_Info_UClass_ASplineMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineMovingPlatform), 1581102807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_SplineMovingPlatform_h_3517128153(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_SplineMovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_SplineMovingPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
