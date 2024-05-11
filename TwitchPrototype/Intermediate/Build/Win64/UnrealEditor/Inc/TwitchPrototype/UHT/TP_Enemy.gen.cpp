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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_Enemy();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_Enemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void ATP_Enemy::StaticRegisterNativesATP_Enemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_Enemy);
	UClass* Z_Construct_UClass_ATP_Enemy_NoRegister()
	{
		return ATP_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_ATP_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_behaviourTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviourTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_Enemy.h" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Behaviour Tree" },
		{ "ModuleRelativePath", "TP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree = { "behaviourTree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_Enemy, behaviourTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree_MetaData), Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_Enemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_Enemy_Statics::NewProp_behaviourTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_Enemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_Enemy_Statics::ClassParams = {
		&ATP_Enemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATP_Enemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_Enemy_Statics::PropPointers),
		0,
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
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_Enemy, ATP_Enemy::StaticClass, TEXT("ATP_Enemy"), &Z_Registration_Info_UClass_ATP_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_Enemy), 4065022455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_1094385391(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
