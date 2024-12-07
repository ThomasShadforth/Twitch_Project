// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/AbilitySystem/TPAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPAttributeSet();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(UTPAttributeSet::execOnRep_MaxHealth)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldMaxHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_MaxHealth(Z_Param_Out_oldMaxHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTPAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_oldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_oldHealth);
		P_NATIVE_END;
	}
	void UTPAttributeSet::StaticRegisterNativesUTPAttributeSet()
	{
		UClass* Class = UTPAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Health", &UTPAttributeSet::execOnRep_Health },
			{ "OnRep_MaxHealth", &UTPAttributeSet::execOnRep_MaxHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics
	{
		struct TPAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData oldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_oldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_oldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::NewProp_oldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::NewProp_oldHealth = { "oldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPAttributeSet_eventOnRep_Health_Parms, oldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::NewProp_oldHealth_MetaData), Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::NewProp_oldHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::NewProp_oldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/TPAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::TPAttributeSet_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::TPAttributeSet_eventOnRep_Health_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics
	{
		struct TPAttributeSet_eventOnRep_MaxHealth_Parms
		{
			FGameplayAttributeData oldMaxHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_oldMaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_oldMaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::NewProp_oldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::NewProp_oldMaxHealth = { "oldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPAttributeSet_eventOnRep_MaxHealth_Parms, oldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::NewProp_oldMaxHealth_MetaData), Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::NewProp_oldMaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::NewProp_oldMaxHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/TPAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPAttributeSet, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::TPAttributeSet_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::TPAttributeSet_eventOnRep_MaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPAttributeSet);
	UClass* Z_Construct_UClass_UTPAttributeSet_NoRegister()
	{
		return UTPAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UTPAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAttributeSet_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPAttributeSet_OnRep_Health, "OnRep_Health" }, // 1343957224
		{ &Z_Construct_UFunction_UTPAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3722041028
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAttributeSet_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/TPAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/TPAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/TPAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100020021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_Health_MetaData), Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_Health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Vital Attributes" },
		{ "ModuleRelativePath", "Public/AbilitySystem/TPAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_Health", (EPropertyFlags)0x0010000100020021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTPAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTPAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTPAttributeSet_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTPAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPAttributeSet_Statics::ClassParams = {
		&UTPAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTPAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTPAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTPAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UTPAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPAttributeSet.OuterSingleton, Z_Construct_UClass_UTPAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPAttributeSet.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPAttributeSet>()
	{
		return UTPAttributeSet::StaticClass();
	}

	void UTPAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_MaxHealth(TEXT("MaxHealth"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTPAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPAttributeSet);
	UTPAttributeSet::~UTPAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPAttributeSet, UTPAttributeSet::StaticClass, TEXT("UTPAttributeSet"), &Z_Registration_Info_UClass_UTPAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPAttributeSet), 1095560898U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPAttributeSet_h_297837021(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_AbilitySystem_TPAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
