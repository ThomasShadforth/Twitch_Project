// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Animation/TP_EnemyAnimInstanceBase.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_EnemyAnimInstanceBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_Enemy_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_EnemyAnimInstanceBase();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_EnemyAnimInstanceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(UTP_EnemyAnimInstanceBase::execUpdateAnimationProperties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UTP_EnemyAnimInstanceBase::StaticRegisterNativesUTP_EnemyAnimInstanceBase()
	{
		UClass* Class = UTP_EnemyAnimInstanceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UTP_EnemyAnimInstanceBase::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics
	{
		struct TP_EnemyAnimInstanceBase_eventUpdateAnimationProperties_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_EnemyAnimInstanceBase_eventUpdateAnimationProperties_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/TP_EnemyAnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_EnemyAnimInstanceBase, nullptr, "UpdateAnimationProperties", nullptr, nullptr, Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::TP_EnemyAnimInstanceBase_eventUpdateAnimationProperties_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::TP_EnemyAnimInstanceBase_eventUpdateAnimationProperties_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTP_EnemyAnimInstanceBase);
	UClass* Z_Construct_UClass_UTP_EnemyAnimInstanceBase_NoRegister()
	{
		return UTP_EnemyAnimInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_enemyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_enemyCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTP_EnemyAnimInstanceBase_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 3878229492
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/TP_EnemyAnimInstanceBase.h" },
		{ "ModuleRelativePath", "Public/Animation/TP_EnemyAnimInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::NewProp_enemyCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TP_EnemyAnimInstanceBase" },
		{ "ModuleRelativePath", "Public/Animation/TP_EnemyAnimInstanceBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::NewProp_enemyCharacter = { "enemyCharacter", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_EnemyAnimInstanceBase, enemyCharacter), Z_Construct_UClass_ATP_Enemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::NewProp_enemyCharacter_MetaData), Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::NewProp_enemyCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::NewProp_enemyCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_EnemyAnimInstanceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::ClassParams = {
		&UTP_EnemyAnimInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTP_EnemyAnimInstanceBase()
	{
		if (!Z_Registration_Info_UClass_UTP_EnemyAnimInstanceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTP_EnemyAnimInstanceBase.OuterSingleton, Z_Construct_UClass_UTP_EnemyAnimInstanceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTP_EnemyAnimInstanceBase.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTP_EnemyAnimInstanceBase>()
	{
		return UTP_EnemyAnimInstanceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_EnemyAnimInstanceBase);
	UTP_EnemyAnimInstanceBase::~UTP_EnemyAnimInstanceBase() {}
	struct Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_EnemyAnimInstanceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_EnemyAnimInstanceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTP_EnemyAnimInstanceBase, UTP_EnemyAnimInstanceBase::StaticClass, TEXT("UTP_EnemyAnimInstanceBase"), &Z_Registration_Info_UClass_UTP_EnemyAnimInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTP_EnemyAnimInstanceBase), 191724434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_EnemyAnimInstanceBase_h_646927043(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_EnemyAnimInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_UnrealProjects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Animation_TP_EnemyAnimInstanceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
