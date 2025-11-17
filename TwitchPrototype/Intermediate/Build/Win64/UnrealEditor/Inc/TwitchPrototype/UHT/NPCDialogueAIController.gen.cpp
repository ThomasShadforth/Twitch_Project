// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/DialogueSystem/NPCDialogueAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCDialogueAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ANPCDialogueAIController();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ANPCDialogueAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	void ANPCDialogueAIController::StaticRegisterNativesANPCDialogueAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCDialogueAIController);
	UClass* Z_Construct_UClass_ANPCDialogueAIController_NoRegister()
	{
		return ANPCDialogueAIController::StaticClass();
	}
	struct Z_Construct_UClass_ANPCDialogueAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCDialogueAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCDialogueAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCDialogueAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DialogueSystem/NPCDialogueAIController.h" },
		{ "ModuleRelativePath", "Public/DialogueSystem/NPCDialogueAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCDialogueAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCDialogueAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCDialogueAIController_Statics::ClassParams = {
		&ANPCDialogueAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCDialogueAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCDialogueAIController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANPCDialogueAIController()
	{
		if (!Z_Registration_Info_UClass_ANPCDialogueAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCDialogueAIController.OuterSingleton, Z_Construct_UClass_ANPCDialogueAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCDialogueAIController.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ANPCDialogueAIController>()
	{
		return ANPCDialogueAIController::StaticClass();
	}
	ANPCDialogueAIController::ANPCDialogueAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCDialogueAIController);
	ANPCDialogueAIController::~ANPCDialogueAIController() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCDialogueAIController, ANPCDialogueAIController::StaticClass, TEXT("ANPCDialogueAIController"), &Z_Registration_Info_UClass_ANPCDialogueAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCDialogueAIController), 2962705986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueAIController_h_2623240647(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
