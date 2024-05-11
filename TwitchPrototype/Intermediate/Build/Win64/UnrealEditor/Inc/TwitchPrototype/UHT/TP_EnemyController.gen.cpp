// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/TP_EnemyController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_EnemyController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_EnemyController();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_EnemyController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void ATP_EnemyController::StaticRegisterNativesATP_EnemyController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_EnemyController);
	UClass* Z_Construct_UClass_ATP_EnemyController_NoRegister()
	{
		return ATP_EnemyController::StaticClass();
	}
	struct Z_Construct_UClass_ATP_EnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blackboardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_blackboardComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_behaviorTreeComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_behaviorTreeComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_EnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_EnemyController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_EnemyController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TP_EnemyController.h" },
		{ "ModuleRelativePath", "TP_EnemyController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_blackboardComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_blackboardComponent = { "blackboardComponent", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_EnemyController, blackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_blackboardComponent_MetaData), Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_blackboardComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_behaviorTreeComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_behaviorTreeComp = { "behaviorTreeComp", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_EnemyController, behaviorTreeComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_behaviorTreeComp_MetaData), Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_behaviorTreeComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_EnemyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_blackboardComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_behaviorTreeComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_EnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_EnemyController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_EnemyController_Statics::ClassParams = {
		&ATP_EnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATP_EnemyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP_EnemyController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_EnemyController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATP_EnemyController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_EnemyController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATP_EnemyController()
	{
		if (!Z_Registration_Info_UClass_ATP_EnemyController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATP_EnemyController.OuterSingleton, Z_Construct_UClass_ATP_EnemyController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATP_EnemyController.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATP_EnemyController>()
	{
		return ATP_EnemyController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_EnemyController);
	ATP_EnemyController::~ATP_EnemyController() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_EnemyController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_EnemyController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATP_EnemyController, ATP_EnemyController::StaticClass, TEXT("ATP_EnemyController"), &Z_Registration_Info_UClass_ATP_EnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_EnemyController), 65636714U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_EnemyController_h_4103739761(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_EnemyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_EnemyController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
