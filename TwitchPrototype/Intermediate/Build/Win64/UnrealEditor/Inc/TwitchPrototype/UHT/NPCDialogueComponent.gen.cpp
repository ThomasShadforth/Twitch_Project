// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/DialogueSystem/NPCDialogueComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCDialogueComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ANPCDialogueAIController_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UNPCDialogueComponent();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UNPCDialogueComponent_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPInteractInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(UNPCDialogueComponent::execOnDialogueExitCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueExitCallback();
		P_NATIVE_END;
	}
	void UNPCDialogueComponent::StaticRegisterNativesUNPCDialogueComponent()
	{
		UClass* Class = UNPCDialogueComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDialogueExitCallback", &UNPCDialogueComponent::execOnDialogueExitCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNPCDialogueComponent_OnDialogueExitCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNPCDialogueComponent_OnDialogueExitCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueSystem/NPCDialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNPCDialogueComponent_OnDialogueExitCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNPCDialogueComponent, nullptr, "OnDialogueExitCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNPCDialogueComponent_OnDialogueExitCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNPCDialogueComponent_OnDialogueExitCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UNPCDialogueComponent_OnDialogueExitCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNPCDialogueComponent_OnDialogueExitCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNPCDialogueComponent);
	UClass* Z_Construct_UClass_UNPCDialogueComponent_NoRegister()
	{
		return UNPCDialogueComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNPCDialogueComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueAIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dialogueAIController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueBlackboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dialogueBlackboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueBoxClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_dialogueBoxClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dialogueTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dialogueTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNPCDialogueComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UNPCDialogueComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNPCDialogueComponent_OnDialogueExitCallback, "OnDialogueExitCallback" }, // 1595669760
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCDialogueComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DialogueSystem/NPCDialogueComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogueSystem/NPCDialogueComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueAIController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NPCDialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueSystem/NPCDialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueAIController = { "dialogueAIController", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDialogueComponent, dialogueAIController), Z_Construct_UClass_ANPCDialogueAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueAIController_MetaData), Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueAIController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBlackboard_MetaData[] = {
		{ "Category", "NPCDialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueSystem/NPCDialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBlackboard = { "dialogueBlackboard", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDialogueComponent, dialogueBlackboard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBlackboard_MetaData), Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBlackboard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBoxClass_MetaData[] = {
		{ "Category", "NPCDialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueSystem/NPCDialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBoxClass = { "dialogueBoxClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDialogueComponent, dialogueBoxClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBoxClass_MetaData), Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBoxClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueTree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NPCDialogueComponent" },
		{ "ModuleRelativePath", "Public/DialogueSystem/NPCDialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueTree = { "dialogueTree", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNPCDialogueComponent, dialogueTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueTree_MetaData), Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueTree_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNPCDialogueComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueAIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBlackboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueBoxClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNPCDialogueComponent_Statics::NewProp_dialogueTree,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNPCDialogueComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTPInteractInterface_NoRegister, (int32)VTABLE_OFFSET(UNPCDialogueComponent, ITPInteractInterface), false },  // 2343556077
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNPCDialogueComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNPCDialogueComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNPCDialogueComponent_Statics::ClassParams = {
		&UNPCDialogueComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNPCDialogueComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UNPCDialogueComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNPCDialogueComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNPCDialogueComponent()
	{
		if (!Z_Registration_Info_UClass_UNPCDialogueComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNPCDialogueComponent.OuterSingleton, Z_Construct_UClass_UNPCDialogueComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNPCDialogueComponent.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UNPCDialogueComponent>()
	{
		return UNPCDialogueComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNPCDialogueComponent);
	UNPCDialogueComponent::~UNPCDialogueComponent() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNPCDialogueComponent, UNPCDialogueComponent::StaticClass, TEXT("UNPCDialogueComponent"), &Z_Registration_Info_UClass_UNPCDialogueComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNPCDialogueComponent), 447169131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueComponent_h_2635305693(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_DialogueSystem_NPCDialogueComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
