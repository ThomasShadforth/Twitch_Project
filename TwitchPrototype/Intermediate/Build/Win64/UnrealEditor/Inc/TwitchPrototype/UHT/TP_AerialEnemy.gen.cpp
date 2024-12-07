// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/TP_AerialEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_AerialEnemy() {}
// Cross Module References
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_AerialEnemy();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_AerialEnemy_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_Enemy();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_FlyingAIComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void ATP_AerialEnemy::StaticRegisterNativesATP_AerialEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_AerialEnemy);
	UClass* Z_Construct_UClass_ATP_AerialEnemy_NoRegister()
	{
		return ATP_AerialEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ATP_AerialEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flyingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_flyingComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_AerialEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATP_Enemy,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_AerialEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_AerialEnemy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TP_AerialEnemy.h" },
		{ "ModuleRelativePath", "Public/TP_AerialEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_AerialEnemy_Statics::NewProp_flyingComponent_MetaData[] = {
		{ "Category", "TP_AerialEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TP_AerialEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_AerialEnemy_Statics::NewProp_flyingComponent = { "flyingComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_AerialEnemy, flyingComponent), Z_Construct_UClass_UTP_FlyingAIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_AerialEnemy_Statics::NewProp_flyingComponent_MetaData), Z_Construct_UClass_ATP_AerialEnemy_Statics::NewProp_flyingComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_AerialEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_AerialEnemy_Statics::NewProp_flyingComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_AerialEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_AerialEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_AerialEnemy_Statics::ClassParams = {
		&ATP_AerialEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATP_AerialEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_AerialEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_AerialEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_AerialEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_AerialEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_AerialEnemy()
	{
		if (!Z_Registration_Info_UClass_ATP_AerialEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_AerialEnemy.OuterSingleton, Z_Construct_UClass_ATP_AerialEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_AerialEnemy.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_AerialEnemy>()
	{
		return ATP_AerialEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_AerialEnemy);
	ATP_AerialEnemy::~ATP_AerialEnemy() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_AerialEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_AerialEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_AerialEnemy, ATP_AerialEnemy::StaticClass, TEXT("ATP_AerialEnemy"), &Z_Registration_Info_UClass_ATP_AerialEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_AerialEnemy), 2892531739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_AerialEnemy_h_1024995706(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_AerialEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_TP_AerialEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
