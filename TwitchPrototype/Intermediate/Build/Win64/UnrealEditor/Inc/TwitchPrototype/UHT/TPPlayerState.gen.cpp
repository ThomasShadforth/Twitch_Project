// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Player/TPPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_CollectibleBase_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATPPlayerState();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATPPlayerState_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UGameSaveData_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPCollectibleInterface_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPLivesInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ATPPlayerState::execHandleHealthZero)
	{
		P_GET_OBJECT(UAttributeSet,Z_Param_inAttributeSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHealthZero(Z_Param_inAttributeSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPPlayerState::execOnSaveGameLoaded)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaveGameLoaded(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATPPlayerState::execOnSaveStarted)
	{
		P_GET_OBJECT(UGameSaveData,Z_Param_SaveGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSaveStarted(Z_Param_SaveGame);
		P_NATIVE_END;
	}
	void ATPPlayerState::StaticRegisterNativesATPPlayerState()
	{
		UClass* Class = ATPPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleHealthZero", &ATPPlayerState::execHandleHealthZero },
			{ "OnSaveGameLoaded", &ATPPlayerState::execOnSaveGameLoaded },
			{ "OnSaveStarted", &ATPPlayerState::execOnSaveStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics
	{
		struct TPPlayerState_eventHandleHealthZero_Parms
		{
			UAttributeSet* inAttributeSet;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inAttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_inAttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::NewProp_inAttributeSet_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::NewProp_inAttributeSet = { "inAttributeSet", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPPlayerState_eventHandleHealthZero_Parms, inAttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::NewProp_inAttributeSet_MetaData), Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::NewProp_inAttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::NewProp_inAttributeSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPPlayerState, nullptr, "HandleHealthZero", nullptr, nullptr, Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::TPPlayerState_eventHandleHealthZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::TPPlayerState_eventHandleHealthZero_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATPPlayerState_HandleHealthZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPPlayerState_HandleHealthZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics
	{
		struct TPPlayerState_eventOnSaveGameLoaded_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((TPPlayerState_eventOnSaveGameLoaded_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TPPlayerState_eventOnSaveGameLoaded_Parms), &Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPPlayerState, nullptr, "OnSaveGameLoaded", nullptr, nullptr, Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::TPPlayerState_eventOnSaveGameLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::TPPlayerState_eventOnSaveGameLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics
	{
		struct TPPlayerState_eventOnSaveStarted_Parms
		{
			UGameSaveData* SaveGame;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPPlayerState_eventOnSaveStarted_Parms, SaveGame), Z_Construct_UClass_UGameSaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::NewProp_SaveGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATPPlayerState, nullptr, "OnSaveStarted", nullptr, nullptr, Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::TPPlayerState_eventOnSaveStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::TPPlayerState_eventOnSaveStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATPPlayerState_OnSaveStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATPPlayerState_OnSaveStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPPlayerState);
	UClass* Z_Construct_UClass_ATPPlayerState_NoRegister()
	{
		return ATPPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ATPPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_abilitySystemComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_abilitySystemComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_attributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_livesCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_livesCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheeseCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_cheeseCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fruitCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_fruitCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fruitMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_fruitMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fruitMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_fruitMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cheeseMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_cheeseMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheeseMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_cheeseMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATPPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATPPlayerState_HandleHealthZero, "HandleHealthZero" }, // 2616852628
		{ &Z_Construct_UFunction_ATPPlayerState_OnSaveGameLoaded, "OnSaveGameLoaded" }, // 2383206493
		{ &Z_Construct_UFunction_ATPPlayerState_OnSaveStarted, "OnSaveStarted" }, // 1765960768
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/TPPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPPlayerState_Statics::NewProp_abilitySystemComp_MetaData[] = {
		{ "Category", "TPPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_abilitySystemComp = { "abilitySystemComp", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPlayerState, abilitySystemComp), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::NewProp_abilitySystemComp_MetaData), Z_Construct_UClass_ATPPlayerState_Statics::NewProp_abilitySystemComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPPlayerState_Statics::NewProp_attributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_attributeSet = { "attributeSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPlayerState, attributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::NewProp_attributeSet_MetaData), Z_Construct_UClass_ATPPlayerState_Statics::NewProp_attributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPPlayerState_Statics::NewProp_livesCount_MetaData[] = {
		{ "Category", "TPPlayerState" },
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_livesCount = { "livesCount", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPlayerState, livesCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::NewProp_livesCount_MetaData), Z_Construct_UClass_ATPPlayerState_Statics::NewProp_livesCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseCount_MetaData[] = {
		{ "Category", "TPPlayerState" },
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseCount = { "cheeseCount", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPlayerState, cheeseCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseCount_MetaData), Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitCount_MetaData[] = {
		{ "Category", "TPPlayerState" },
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitCount = { "fruitCount", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPlayerState, fruitCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitCount_MetaData), Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitCount_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitMap_ValueProp = { "fruitMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ATP_CollectibleBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitMap_Key_KeyProp = { "fruitMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitMap_MetaData[] = {
		{ "Category", "TPPlayerState" },
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitMap = { "fruitMap", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPlayerState, fruitMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitMap_MetaData), Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitMap_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseMap_ValueProp = { "cheeseMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ATP_CollectibleBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseMap_Key_KeyProp = { "cheeseMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseMap_MetaData[] = {
		{ "Category", "TPPlayerState" },
		{ "ModuleRelativePath", "Public/Player/TPPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseMap = { "cheeseMap", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATPPlayerState, cheeseMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseMap_MetaData), Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATPPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_abilitySystemComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_attributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_livesCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_fruitMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATPPlayerState_Statics::NewProp_cheeseMap,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATPPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ATPPlayerState, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UTPCollectibleInterface_NoRegister, (int32)VTABLE_OFFSET(ATPPlayerState, ITPCollectibleInterface), false },  // 2705995814
			{ Z_Construct_UClass_UTPLivesInterface_NoRegister, (int32)VTABLE_OFFSET(ATPPlayerState, ITPLivesInterface), false },  // 3278784675
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPPlayerState_Statics::ClassParams = {
		&ATPPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATPPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATPPlayerState()
	{
		if (!Z_Registration_Info_UClass_ATPPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPPlayerState.OuterSingleton, Z_Construct_UClass_ATPPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPPlayerState.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<ATPPlayerState>()
	{
		return ATPPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPPlayerState);
	ATPPlayerState::~ATPPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPPlayerState, ATPPlayerState::StaticClass, TEXT("ATPPlayerState"), &Z_Registration_Info_UClass_ATPPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPPlayerState), 3944933452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPPlayerState_h_157136796(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
