// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/LevelObjects/TP_LevelItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_LevelItem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_LevelItem();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_LevelItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void ATP_LevelItem::StaticRegisterNativesATP_LevelItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_LevelItem);
	UClass* Z_Construct_UClass_ATP_LevelItem_NoRegister()
	{
		return ATP_LevelItem::StaticClass();
	}
	struct Z_Construct_UClass_ATP_LevelItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_itemMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_itemMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_LevelItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_LevelItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_LevelItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelObjects/TP_LevelItem.h" },
		{ "ModuleRelativePath", "Public/LevelObjects/TP_LevelItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_LevelItem_Statics::NewProp_itemMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelObjects/TP_LevelItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_LevelItem_Statics::NewProp_itemMesh = { "itemMesh", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_LevelItem, itemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_LevelItem_Statics::NewProp_itemMesh_MetaData), Z_Construct_UClass_ATP_LevelItem_Statics::NewProp_itemMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_LevelItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_LevelItem_Statics::NewProp_itemMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_LevelItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_LevelItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_LevelItem_Statics::ClassParams = {
		&ATP_LevelItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATP_LevelItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_LevelItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_LevelItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_LevelItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_LevelItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_LevelItem()
	{
		if (!Z_Registration_Info_UClass_ATP_LevelItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_LevelItem.OuterSingleton, Z_Construct_UClass_ATP_LevelItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_LevelItem.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_LevelItem>()
	{
		return ATP_LevelItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_LevelItem);
	ATP_LevelItem::~ATP_LevelItem() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_LevelObjects_TP_LevelItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_LevelObjects_TP_LevelItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_LevelItem, ATP_LevelItem::StaticClass, TEXT("ATP_LevelItem"), &Z_Registration_Info_UClass_ATP_LevelItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_LevelItem), 2674622985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_LevelObjects_TP_LevelItem_h_1937104010(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_LevelObjects_TP_LevelItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_LevelObjects_TP_LevelItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
