// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/TP_BaseProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_BaseProjectile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_BaseProjectile();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_BaseProjectile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ATP_BaseProjectile::execGetProjectileSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProjectileSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATP_BaseProjectile::execSetOwningActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ownerActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwningActor(Z_Param_ownerActor);
		P_NATIVE_END;
	}
	void ATP_BaseProjectile::StaticRegisterNativesATP_BaseProjectile()
	{
		UClass* Class = ATP_BaseProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectileSpeed", &ATP_BaseProjectile::execGetProjectileSpeed },
			{ "SetOwningActor", &ATP_BaseProjectile::execSetOwningActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics
	{
		struct TP_BaseProjectile_eventGetProjectileSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_BaseProjectile_eventGetProjectileSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TP_BaseProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_BaseProjectile, nullptr, "GetProjectileSpeed", nullptr, nullptr, Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::TP_BaseProjectile_eventGetProjectileSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::TP_BaseProjectile_eventGetProjectileSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics
	{
		struct TP_BaseProjectile_eventSetOwningActor_Parms
		{
			AActor* ownerActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ownerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::NewProp_ownerActor = { "ownerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_BaseProjectile_eventSetOwningActor_Parms, ownerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::NewProp_ownerActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TP_BaseProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_BaseProjectile, nullptr, "SetOwningActor", nullptr, nullptr, Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::TP_BaseProjectile_eventSetOwningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::TP_BaseProjectile_eventSetOwningActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_BaseProjectile);
	UClass* Z_Construct_UClass_ATP_BaseProjectile_NoRegister()
	{
		return ATP_BaseProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ATP_BaseProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_owningActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_owningActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_projectileMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_projectileSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_projectileSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_BaseProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_BaseProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_BaseProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_BaseProjectile_GetProjectileSpeed, "GetProjectileSpeed" }, // 2169261921
		{ &Z_Construct_UFunction_ATP_BaseProjectile_SetOwningActor, "SetOwningActor" }, // 2424565560
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_BaseProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_BaseProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TP_BaseProjectile.h" },
		{ "ModuleRelativePath", "Public/TP_BaseProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_owningActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_BaseProjectile" },
		{ "ModuleRelativePath", "Public/TP_BaseProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_owningActor = { "owningActor", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_BaseProjectile, owningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_owningActor_MetaData), Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_owningActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileMovement_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_BaseProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TP_BaseProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileMovement = { "projectileMovement", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_BaseProjectile, projectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileMovement_MetaData), Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileSpeed_MetaData[] = {
		{ "Category", "TP_BaseProjectile" },
		{ "ModuleRelativePath", "Public/TP_BaseProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileSpeed = { "projectileSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_BaseProjectile, projectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileSpeed_MetaData), Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_BaseProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_owningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_BaseProjectile_Statics::NewProp_projectileSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_BaseProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_BaseProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_BaseProjectile_Statics::ClassParams = {
		&ATP_BaseProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_BaseProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_BaseProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_BaseProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_BaseProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_BaseProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_BaseProjectile()
	{
		if (!Z_Registration_Info_UClass_ATP_BaseProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_BaseProjectile.OuterSingleton, Z_Construct_UClass_ATP_BaseProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_BaseProjectile.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_BaseProjectile>()
	{
		return ATP_BaseProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_BaseProjectile);
	ATP_BaseProjectile::~ATP_BaseProjectile() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_BaseProjectile, ATP_BaseProjectile::StaticClass, TEXT("ATP_BaseProjectile"), &Z_Registration_Info_UClass_ATP_BaseProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_BaseProjectile), 1918112697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_2893680046(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_BaseProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
