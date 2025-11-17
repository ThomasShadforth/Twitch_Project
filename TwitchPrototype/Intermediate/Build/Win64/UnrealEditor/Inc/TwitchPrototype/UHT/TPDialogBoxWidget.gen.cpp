// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/UI/Widget/TPDialogBoxWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPDialogBoxWidget() {}
// Cross Module References
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPDialogBoxWidget();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPDialogBoxWidget_NoRegister();
	TWITCHPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_OnExitSignature__DelegateSignature();
	TWITCHPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature();
	TWITCHPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_OnSpeakFinishedSignature__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchPrototype_OnExitSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchPrototype_OnExitSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/UI/Widget/TPDialogBoxWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchPrototype_OnExitSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype, nullptr, "OnExitSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_OnExitSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchPrototype_OnExitSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_OnExitSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchPrototype_OnExitSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnExitSignature_DelegateWrapper(const FMulticastScriptDelegate& OnExitSignature)
{
	OnExitSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_TwitchPrototype_OnSpeakFinishedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchPrototype_OnSpeakFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/TPDialogBoxWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchPrototype_OnSpeakFinishedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype, nullptr, "OnSpeakFinishedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_OnSpeakFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchPrototype_OnSpeakFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_OnSpeakFinishedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchPrototype_OnSpeakFinishedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSpeakFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSpeakFinishedSignature)
{
	OnSpeakFinishedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics
	{
		struct _Script_TwitchPrototype_eventOnReplyFinishedSignature_Parms
		{
			int32 SelectedReplyOption;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedReplyOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::NewProp_SelectedReplyOption = { "SelectedReplyOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchPrototype_eventOnReplyFinishedSignature_Parms, SelectedReplyOption), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::NewProp_SelectedReplyOption,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/Widget/TPDialogBoxWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype, nullptr, "OnReplyFinishedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::_Script_TwitchPrototype_eventOnReplyFinishedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::_Script_TwitchPrototype_eventOnReplyFinishedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReplyFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnReplyFinishedSignature, int32 SelectedReplyOption)
{
	struct _Script_TwitchPrototype_eventOnReplyFinishedSignature_Parms
	{
		int32 SelectedReplyOption;
	};
	_Script_TwitchPrototype_eventOnReplyFinishedSignature_Parms Parms;
	Parms.SelectedReplyOption=SelectedReplyOption;
	OnReplyFinishedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UTPDialogBoxWidget::StaticRegisterNativesUTPDialogBoxWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPDialogBoxWidget);
	UClass* Z_Construct_UClass_UTPDialogBoxWidget_NoRegister()
	{
		return UTPDialogBoxWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTPDialogBoxWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onExit_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onExit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onSpeakFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSpeakFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onReplyFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onReplyFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPDialogBoxWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPDialogBoxWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPDialogBoxWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Widget/TPDialogBoxWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Widget/TPDialogBoxWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onExit_MetaData[] = {
		{ "Category", "TPDialogBoxWidget" },
		{ "ModuleRelativePath", "Public/UI/Widget/TPDialogBoxWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onExit = { "onExit", nullptr, (EPropertyFlags)0x0010100010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPDialogBoxWidget, onExit), Z_Construct_UDelegateFunction_TwitchPrototype_OnExitSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onExit_MetaData), Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onExit_MetaData) }; // 2685590297
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onSpeakFinished_MetaData[] = {
		{ "Category", "TPDialogBoxWidget" },
		{ "ModuleRelativePath", "Public/UI/Widget/TPDialogBoxWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onSpeakFinished = { "onSpeakFinished", nullptr, (EPropertyFlags)0x0010100010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPDialogBoxWidget, onSpeakFinished), Z_Construct_UDelegateFunction_TwitchPrototype_OnSpeakFinishedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onSpeakFinished_MetaData), Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onSpeakFinished_MetaData) }; // 1570618647
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onReplyFinished_MetaData[] = {
		{ "Category", "TPDialogBoxWidget" },
		{ "ModuleRelativePath", "Public/UI/Widget/TPDialogBoxWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onReplyFinished = { "onReplyFinished", nullptr, (EPropertyFlags)0x0010100010080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPDialogBoxWidget, onReplyFinished), Z_Construct_UDelegateFunction_TwitchPrototype_OnReplyFinishedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onReplyFinished_MetaData), Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onReplyFinished_MetaData) }; // 3898368323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTPDialogBoxWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onExit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onSpeakFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPDialogBoxWidget_Statics::NewProp_onReplyFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPDialogBoxWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPDialogBoxWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPDialogBoxWidget_Statics::ClassParams = {
		&UTPDialogBoxWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTPDialogBoxWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTPDialogBoxWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPDialogBoxWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPDialogBoxWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPDialogBoxWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTPDialogBoxWidget()
	{
		if (!Z_Registration_Info_UClass_UTPDialogBoxWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPDialogBoxWidget.OuterSingleton, Z_Construct_UClass_UTPDialogBoxWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPDialogBoxWidget.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPDialogBoxWidget>()
	{
		return UTPDialogBoxWidget::StaticClass();
	}
	UTPDialogBoxWidget::UTPDialogBoxWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPDialogBoxWidget);
	UTPDialogBoxWidget::~UTPDialogBoxWidget() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPDialogBoxWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPDialogBoxWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPDialogBoxWidget, UTPDialogBoxWidget::StaticClass, TEXT("UTPDialogBoxWidget"), &Z_Registration_Info_UClass_UTPDialogBoxWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPDialogBoxWidget), 389521020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPDialogBoxWidget_h_3650190375(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPDialogBoxWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_Widget_TPDialogBoxWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
