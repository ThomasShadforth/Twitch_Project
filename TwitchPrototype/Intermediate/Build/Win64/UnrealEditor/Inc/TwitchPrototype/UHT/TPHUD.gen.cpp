// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/UI/HUD/TPHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPHUD() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATPHUD();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATPHUD_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UOverlayWidgetController_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPWidgetBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void ATPHUD::StaticRegisterNativesATPHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPHUD);
	UClass* Z_Construct_UClass_ATPHUD_NoRegister()
	{
		return ATPHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlayWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_overlayWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlayWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_overlayWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlayWidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_overlayWidgetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlayWidgetControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_overlayWidgetControllerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/HUD/TPHUD.h" },
		{ "ModuleRelativePath", "Public/UI/HUD/TPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/HUD/TPHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidget = { "overlayWidget", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPHUD, overlayWidget), Z_Construct_UClass_UTPWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidget_MetaData), Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetClass_MetaData[] = {
		{ "Category", "TPHUD" },
		{ "ModuleRelativePath", "Public/UI/HUD/TPHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetClass = { "overlayWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPHUD, overlayWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTPWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetClass_MetaData), Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/TPHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetController = { "overlayWidgetController", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPHUD, overlayWidgetController), Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetController_MetaData), Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetControllerClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/HUD/TPHUD.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetControllerClass = { "overlayWidgetControllerClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPHUD, overlayWidgetControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UOverlayWidgetController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetControllerClass_MetaData), Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetControllerClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPHUD_Statics::NewProp_overlayWidgetControllerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPHUD_Statics::ClassParams = {
		&ATPHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATPHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATPHUD()
	{
		if (!Z_Registration_Info_UClass_ATPHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPHUD.OuterSingleton, Z_Construct_UClass_ATPHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPHUD.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATPHUD>()
	{
		return ATPHUD::StaticClass();
	}
	ATPHUD::ATPHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPHUD);
	ATPHUD::~ATPHUD() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_HUD_TPHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_HUD_TPHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPHUD, ATPHUD::StaticClass, TEXT("ATPHUD"), &Z_Registration_Info_UClass_ATPHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPHUD), 346914246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_HUD_TPHUD_h_3760093698(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_HUD_TPHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_HUD_TPHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
