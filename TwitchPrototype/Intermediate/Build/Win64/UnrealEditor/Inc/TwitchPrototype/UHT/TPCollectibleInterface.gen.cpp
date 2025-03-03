// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Interaction/TPCollectibleInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPCollectibleInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_CollectibleBase_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPCollectibleInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPCollectibleInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ITPCollectibleInterface::execTestCollectedCollectible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestCollectedCollectible_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITPCollectibleInterface::execCollectedCollectible)
	{
		P_GET_OBJECT(ATP_CollectibleBase,Z_Param_Collectible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectedCollectible_Implementation(Z_Param_Collectible);
		P_NATIVE_END;
	}
	struct TPCollectibleInterface_eventCollectedCollectible_Parms
	{
		ATP_CollectibleBase* Collectible;
	};
	void ITPCollectibleInterface::CollectedCollectible(ATP_CollectibleBase* Collectible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CollectedCollectible instead.");
	}
	void ITPCollectibleInterface::TestCollectedCollectible()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TestCollectedCollectible instead.");
	}
	void UTPCollectibleInterface::StaticRegisterNativesUTPCollectibleInterface()
	{
		UClass* Class = UTPCollectibleInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectedCollectible", &ITPCollectibleInterface::execCollectedCollectible },
			{ "TestCollectedCollectible", &ITPCollectibleInterface::execTestCollectedCollectible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collectible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::NewProp_Collectible = { "Collectible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPCollectibleInterface_eventCollectedCollectible_Parms, Collectible), Z_Construct_UClass_ATP_CollectibleBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::NewProp_Collectible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/TPCollectibleInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPCollectibleInterface, nullptr, "CollectedCollectible", nullptr, nullptr, Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::PropPointers), sizeof(TPCollectibleInterface_eventCollectedCollectible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPCollectibleInterface_eventCollectedCollectible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTPCollectibleInterface_TestCollectedCollectible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPCollectibleInterface_TestCollectedCollectible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/TPCollectibleInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPCollectibleInterface_TestCollectedCollectible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPCollectibleInterface, nullptr, "TestCollectedCollectible", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPCollectibleInterface_TestCollectedCollectible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPCollectibleInterface_TestCollectedCollectible_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTPCollectibleInterface_TestCollectedCollectible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPCollectibleInterface_TestCollectedCollectible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPCollectibleInterface);
	UClass* Z_Construct_UClass_UTPCollectibleInterface_NoRegister()
	{
		return UTPCollectibleInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTPCollectibleInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPCollectibleInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPCollectibleInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPCollectibleInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPCollectibleInterface_CollectedCollectible, "CollectedCollectible" }, // 4274656615
		{ &Z_Construct_UFunction_UTPCollectibleInterface_TestCollectedCollectible, "TestCollectedCollectible" }, // 4051972669
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPCollectibleInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPCollectibleInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/TPCollectibleInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPCollectibleInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITPCollectibleInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPCollectibleInterface_Statics::ClassParams = {
		&UTPCollectibleInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPCollectibleInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPCollectibleInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTPCollectibleInterface()
	{
		if (!Z_Registration_Info_UClass_UTPCollectibleInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPCollectibleInterface.OuterSingleton, Z_Construct_UClass_UTPCollectibleInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPCollectibleInterface.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPCollectibleInterface>()
	{
		return UTPCollectibleInterface::StaticClass();
	}
	UTPCollectibleInterface::UTPCollectibleInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPCollectibleInterface);
	UTPCollectibleInterface::~UTPCollectibleInterface() {}
	static FName NAME_UTPCollectibleInterface_CollectedCollectible = FName(TEXT("CollectedCollectible"));
	void ITPCollectibleInterface::Execute_CollectedCollectible(UObject* O, ATP_CollectibleBase* Collectible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPCollectibleInterface::StaticClass()));
		TPCollectibleInterface_eventCollectedCollectible_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTPCollectibleInterface_CollectedCollectible);
		if (Func)
		{
			Parms.Collectible=Collectible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITPCollectibleInterface*)(O->GetNativeInterfaceAddress(UTPCollectibleInterface::StaticClass())))
		{
			I->CollectedCollectible_Implementation(Collectible);
		}
	}
	static FName NAME_UTPCollectibleInterface_TestCollectedCollectible = FName(TEXT("TestCollectedCollectible"));
	void ITPCollectibleInterface::Execute_TestCollectedCollectible(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPCollectibleInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTPCollectibleInterface_TestCollectedCollectible);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITPCollectibleInterface*)(O->GetNativeInterfaceAddress(UTPCollectibleInterface::StaticClass())))
		{
			I->TestCollectedCollectible_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPCollectibleInterface, UTPCollectibleInterface::StaticClass, TEXT("UTPCollectibleInterface"), &Z_Registration_Info_UClass_UTPCollectibleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPCollectibleInterface), 2705995814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_2187881452(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPCollectibleInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
