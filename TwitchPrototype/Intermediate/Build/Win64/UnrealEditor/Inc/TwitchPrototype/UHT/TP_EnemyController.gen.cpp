// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/TP_EnemyController.h"
#include "Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_EnemyController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_EnemyController();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_EnemyController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	struct TP_EnemyController_eventDetectedTarget_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
	static FName NAME_ATP_EnemyController_DetectedTarget = FName(TEXT("DetectedTarget"));
	void ATP_EnemyController::DetectedTarget(AActor* Actor, FAIStimulus Stimulus)
	{
		TP_EnemyController_eventDetectedTarget_Parms Parms;
		Parms.Actor=Actor;
		Parms.Stimulus=Stimulus;
		ProcessEvent(FindFunctionChecked(NAME_ATP_EnemyController_DetectedTarget),&Parms);
	}
	void ATP_EnemyController::StaticRegisterNativesATP_EnemyController()
	{
	}
	struct Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_EnemyController_eventDetectedTarget_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_EnemyController_eventDetectedTarget_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 1355587946
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TP_EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATP_EnemyController, nullptr, "DetectedTarget", nullptr, nullptr, Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::PropPointers), sizeof(TP_EnemyController_eventDetectedTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(TP_EnemyController_eventDetectedTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATP_EnemyController_DetectedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATP_EnemyController_DetectedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATP_EnemyController);
	UClass* Z_Construct_UClass_ATP_EnemyController_NoRegister()
	{
		return ATP_EnemyController::StaticClass();
	}
	struct Z_Construct_UClass_ATP_EnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aiPerception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_aiPerception;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_EnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_EnemyController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATP_EnemyController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATP_EnemyController_DetectedTarget, "DetectedTarget" }, // 2779286094
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_EnemyController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_EnemyController_Statics::Class_MetaDataParams[] = {
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_aiPerception_MetaData[] = {
		{ "Category", "TP_EnemyController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TP_EnemyController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_aiPerception = { "aiPerception", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATP_EnemyController, aiPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_aiPerception_MetaData), Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_aiPerception_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP_EnemyController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_blackboardComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_behaviorTreeComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP_EnemyController_Statics::NewProp_aiPerception,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_EnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_EnemyController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATP_EnemyController_Statics::ClassParams = {
		&ATP_EnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATP_EnemyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_ATP_EnemyController, ATP_EnemyController::StaticClass, TEXT("ATP_EnemyController"), &Z_Registration_Info_UClass_ATP_EnemyController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATP_EnemyController), 3130357631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_EnemyController_h_321248751(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_EnemyController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_TP_EnemyController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
