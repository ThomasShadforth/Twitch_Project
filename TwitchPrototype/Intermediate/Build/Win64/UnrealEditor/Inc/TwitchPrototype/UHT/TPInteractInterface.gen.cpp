// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Interaction/TPInteractInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPInteractInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_ATP_PlayerCharacter_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPInteractInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTPInteractInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ITPInteractInterface::execInteract)
	{
		P_GET_OBJECT(ATP_PlayerCharacter,Z_Param_PlayerCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_PlayerCharacter);
		P_NATIVE_END;
	}
	struct TPInteractInterface_eventInteract_Parms
	{
		ATP_PlayerCharacter* PlayerCharacter;
	};
	void ITPInteractInterface::Interact(ATP_PlayerCharacter* PlayerCharacter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UTPInteractInterface::StaticRegisterNativesUTPInteractInterface()
	{
		UClass* Class = UTPInteractInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &ITPInteractInterface::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTPInteractInterface_Interact_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TPInteractInterface_eventInteract_Parms, PlayerCharacter), Z_Construct_UClass_ATP_PlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/TPInteractInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTPInteractInterface, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::PropPointers), sizeof(TPInteractInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::PropPointers) < 2048);
	static_assert(sizeof(TPInteractInterface_eventInteract_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTPInteractInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTPInteractInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTPInteractInterface);
	UClass* Z_Construct_UClass_UTPInteractInterface_NoRegister()
	{
		return UTPInteractInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTPInteractInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTPInteractInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPInteractInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTPInteractInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTPInteractInterface_Interact, "Interact" }, // 1021652460
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTPInteractInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTPInteractInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/TPInteractInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTPInteractInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITPInteractInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTPInteractInterface_Statics::ClassParams = {
		&UTPInteractInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTPInteractInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTPInteractInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTPInteractInterface()
	{
		if (!Z_Registration_Info_UClass_UTPInteractInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTPInteractInterface.OuterSingleton, Z_Construct_UClass_UTPInteractInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTPInteractInterface.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTPInteractInterface>()
	{
		return UTPInteractInterface::StaticClass();
	}
	UTPInteractInterface::UTPInteractInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTPInteractInterface);
	UTPInteractInterface::~UTPInteractInterface() {}
	static FName NAME_UTPInteractInterface_Interact = FName(TEXT("Interact"));
	void ITPInteractInterface::Execute_Interact(UObject* O, ATP_PlayerCharacter* PlayerCharacter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTPInteractInterface::StaticClass()));
		TPInteractInterface_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTPInteractInterface_Interact);
		if (Func)
		{
			Parms.PlayerCharacter=PlayerCharacter;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITPInteractInterface*)(O->GetNativeInterfaceAddress(UTPInteractInterface::StaticClass())))
		{
			I->Interact_Implementation(PlayerCharacter);
		}
	}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTPInteractInterface, UTPInteractInterface::StaticClass, TEXT("UTPInteractInterface"), &Z_Registration_Info_UClass_UTPInteractInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTPInteractInterface), 2343556077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_1327836686(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Interaction_TPInteractInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
