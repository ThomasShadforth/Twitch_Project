// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/UI/WidgetController/WidgetControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetControllerBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UWidgetControllerBase();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UWidgetControllerBase_NoRegister();
	TWITCHPROTOTYPE_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetControllerParams;
class UScriptStruct* FWidgetControllerParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetControllerParams, (UObject*)Z_Construct_UPackage__Script_TwitchPrototype(), TEXT("WidgetControllerParams"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetControllerParams.OuterSingleton;
}
template<> TWITCHPROTOTYPE_API UScriptStruct* StaticStruct<FWidgetControllerParams>()
{
	return FWidgetControllerParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetControllerParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_abilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_abilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetControllerParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerController_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerController = { "playerController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerController_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerState_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerState = { "playerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, playerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerState_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_abilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_abilitySystemComponent = { "abilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, abilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_abilitySystemComponent_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_abilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_attributeSet_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_attributeSet = { "attributeSet", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, attributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_attributeSet_MetaData), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_attributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_playerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_abilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_attributeSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
		nullptr,
		&NewStructOps,
		"WidgetControllerParams",
		Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers),
		sizeof(FWidgetControllerParams),
		alignof(FWidgetControllerParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetControllerParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UWidgetControllerBase::execSetWidgetControllerParams)
	{
		P_GET_STRUCT_REF(FWidgetControllerParams,Z_Param_Out_wcParms);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetControllerParams(Z_Param_Out_wcParms);
		P_NATIVE_END;
	}
	void UWidgetControllerBase::StaticRegisterNativesUWidgetControllerBase()
	{
		UClass* Class = UWidgetControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetWidgetControllerParams", &UWidgetControllerBase::execSetWidgetControllerParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics
	{
		struct WidgetControllerBase_eventSetWidgetControllerParams_Parms
		{
			FWidgetControllerParams wcParms;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wcParms_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wcParms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::NewProp_wcParms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::NewProp_wcParms = { "wcParms", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WidgetControllerBase_eventSetWidgetControllerParams_Parms, wcParms), Z_Construct_UScriptStruct_FWidgetControllerParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::NewProp_wcParms_MetaData), Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::NewProp_wcParms_MetaData) }; // 2090207845
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::NewProp_wcParms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetControllerBase, nullptr, "SetWidgetControllerParams", nullptr, nullptr, Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::WidgetControllerBase_eventSetWidgetControllerParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::WidgetControllerBase_eventSetWidgetControllerParams_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetControllerBase);
	UClass* Z_Construct_UClass_UWidgetControllerBase_NoRegister()
	{
		return UWidgetControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_abilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_abilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetControllerBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetControllerBase_SetWidgetControllerParams, "SetWidgetControllerParams" }, // 1826209576
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetControllerBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetControllerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/WidgetController/WidgetControllerBase.h" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerController_MetaData[] = {
		{ "Category", "Widget Controller" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerController = { "playerController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetControllerBase, playerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerController_MetaData), Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerState_MetaData[] = {
		{ "Category", "Widget Controller" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerState = { "playerState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetControllerBase, playerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerState_MetaData), Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_abilitySystemComponent_MetaData[] = {
		{ "Category", "Widget Controller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_abilitySystemComponent = { "abilitySystemComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetControllerBase, abilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_abilitySystemComponent_MetaData), Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_abilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_attributeSet_MetaData[] = {
		{ "Category", "Widget Controller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/WidgetController/WidgetControllerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_attributeSet = { "attributeSet", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidgetControllerBase, attributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_attributeSet_MetaData), Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_attributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetControllerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_playerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_abilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetControllerBase_Statics::NewProp_attributeSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetControllerBase_Statics::ClassParams = {
		&UWidgetControllerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetControllerBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetControllerBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetControllerBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UWidgetControllerBase()
	{
		if (!Z_Registration_Info_UClass_UWidgetControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetControllerBase.OuterSingleton, Z_Construct_UClass_UWidgetControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetControllerBase.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UWidgetControllerBase>()
	{
		return UWidgetControllerBase::StaticClass();
	}
	UWidgetControllerBase::UWidgetControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetControllerBase);
	UWidgetControllerBase::~UWidgetControllerBase() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_WidgetController_WidgetControllerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_WidgetController_WidgetControllerBase_h_Statics::ScriptStructInfo[] = {
		{ FWidgetControllerParams::StaticStruct, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewStructOps, TEXT("WidgetControllerParams"), &Z_Registration_Info_UScriptStruct_WidgetControllerParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetControllerParams), 2090207845U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_WidgetController_WidgetControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetControllerBase, UWidgetControllerBase::StaticClass, TEXT("UWidgetControllerBase"), &Z_Registration_Info_UClass_UWidgetControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetControllerBase), 3557206902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_WidgetController_WidgetControllerBase_h_3443006702(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_WidgetController_WidgetControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_WidgetController_WidgetControllerBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_WidgetController_WidgetControllerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_UI_WidgetController_WidgetControllerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
