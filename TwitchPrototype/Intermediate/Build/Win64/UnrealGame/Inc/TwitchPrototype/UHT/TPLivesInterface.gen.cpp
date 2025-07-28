// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Player/TPLivesInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPLivesInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPLivesInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPLivesInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ITPLivesInterface::execSetCurrentLives)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_lifeAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentLives_Implementation(Z_Param_lifeAmount);
		P_NATIVE_END;
	}
	struct TPLivesInterface_eventSetCurrentLives_Parms
	{
		int32 lifeAmount;
	};
	void ITPLivesInterface::SetCurrentLives(int32 lifeAmount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCurrentLives instead.");
	}
	void UTPLivesInterface::StaticRegisterNativesUTPLivesInterface()
	{
		UClass* Class = UTPLivesInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCurrentLives", &ITPLivesInterface::execSetCurrentLives },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_lifeAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::NewProp_lifeAmount = { "lifeAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPLivesInterface_eventSetCurrentLives_Parms, lifeAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::NewProp_lifeAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TPLivesInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPLivesInterface, nullptr, "SetCurrentLives", nullptr, nullptr, Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::PropPointers), sizeof(TPLivesInterface_eventSetCurrentLives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPLivesInterface_eventSetCurrentLives_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPLivesInterface);
	UClass* Z_Construct_UClass_UTPLivesInterface_NoRegister()
	{
		return UTPLivesInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTPLivesInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPLivesInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPLivesInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPLivesInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPLivesInterface_SetCurrentLives, "SetCurrentLives" }, // 2511857520
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPLivesInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPLivesInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TPLivesInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPLivesInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITPLivesInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPLivesInterface_Statics::ClassParams = {
		&UTPLivesInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPLivesInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPLivesInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTPLivesInterface()
	{
		if (!Z_Registration_Info_UClass_UTPLivesInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPLivesInterface.OuterSingleton, Z_Construct_UClass_UTPLivesInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPLivesInterface.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPLivesInterface>()
	{
		return UTPLivesInterface::StaticClass();
	}
	UTPLivesInterface::UTPLivesInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPLivesInterface);
	UTPLivesInterface::~UTPLivesInterface() {}
	static FName NAME_UTPLivesInterface_SetCurrentLives = FName(TEXT("SetCurrentLives"));
	void ITPLivesInterface::Execute_SetCurrentLives(UObject* O, int32 lifeAmount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPLivesInterface::StaticClass()));
		TPLivesInterface_eventSetCurrentLives_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTPLivesInterface_SetCurrentLives);
		if (Func)
		{
			Parms.lifeAmount=lifeAmount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITPLivesInterface*)(O->GetNativeInterfaceAddress(UTPLivesInterface::StaticClass())))
		{
			I->SetCurrentLives_Implementation(lifeAmount);
		}
	}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPLivesInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPLivesInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPLivesInterface, UTPLivesInterface::StaticClass, TEXT("UTPLivesInterface"), &Z_Registration_Info_UClass_UTPLivesInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPLivesInterface), 3278784675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPLivesInterface_h_3243038003(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPLivesInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Player_TPLivesInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
