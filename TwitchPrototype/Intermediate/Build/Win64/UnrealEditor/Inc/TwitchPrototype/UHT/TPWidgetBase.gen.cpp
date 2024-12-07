// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/UI/Widget/TPWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPWidgetBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPWidgetBase();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPWidgetBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(UTPWidgetBase::execSetWidgetController)
	{
		P_GET_OBJECT(UObject,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetController(Z_Param_InController);
		P_NATIVE_END;
	}
	static FName NAME_UTPWidgetBase_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
	void UTPWidgetBase::WidgetControllerSet()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTPWidgetBase_WidgetControllerSet),NULL);
	}
	void UTPWidgetBase::StaticRegisterNativesUTPWidgetBase()
	{
		UClass* Class = UTPWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetController", &UTPWidgetBase::execSetWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics
	{
		struct TPWidgetBase_eventSetWidgetController_Parms
		{
			UObject* InController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPWidgetBase_eventSetWidgetController_Parms, InController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::NewProp_InController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/TPWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPWidgetBase, nullptr, "SetWidgetController", nullptr, nullptr, Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::TPWidgetBase_eventSetWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::TPWidgetBase_eventSetWidgetController_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPWidgetBase_SetWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPWidgetBase_SetWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPWidgetBase_WidgetControllerSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPWidgetBase_WidgetControllerSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/TPWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPWidgetBase_WidgetControllerSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPWidgetBase, nullptr, "WidgetControllerSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPWidgetBase_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPWidgetBase_WidgetControllerSet_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTPWidgetBase_WidgetControllerSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPWidgetBase_WidgetControllerSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPWidgetBase);
	UClass* Z_Construct_UClass_UTPWidgetBase_NoRegister()
	{
		return UTPWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UTPWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPWidgetBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPWidgetBase_SetWidgetController, "SetWidgetController" }, // 3710700041
		{ &Z_Construct_UFunction_UTPWidgetBase_WidgetControllerSet, "WidgetControllerSet" }, // 1856045418
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPWidgetBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPWidgetBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widget/TPWidgetBase.h" },
		{ "ModuleRelativePath", "Public/UI/Widget/TPWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPWidgetBase_Statics::ClassParams = {
		&UTPWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPWidgetBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTPWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UTPWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPWidgetBase.OuterSingleton, Z_Construct_UClass_UTPWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPWidgetBase.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPWidgetBase>()
	{
		return UTPWidgetBase::StaticClass();
	}
	UTPWidgetBase::UTPWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPWidgetBase);
	UTPWidgetBase::~UTPWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPWidgetBase, UTPWidgetBase::StaticClass, TEXT("UTPWidgetBase"), &Z_Registration_Info_UClass_UTPWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPWidgetBase), 935798535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPWidgetBase_h_2051329433(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
