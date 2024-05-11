// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/StompInterface.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStompInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UStompInterface();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UStompInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	DEFINE_FUNCTION(IStompInterface::execStompObject)
	{
		P_GET_STRUCT(FHitResult,Z_Param_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StompObject_Implementation(Z_Param_hit);
		P_NATIVE_END;
	}
	struct StompInterface_eventStompObject_Parms
	{
		FHitResult hit;
	};
	void IStompInterface::StompObject(FHitResult hit)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StompObject instead.");
	}
	void UStompInterface::StaticRegisterNativesUStompInterface()
	{
		UClass* Class = UStompInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StompObject", &IStompInterface::execStompObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStompInterface_StompObject_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStompInterface_StompObject_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StompInterface_eventStompObject_Parms, hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStompInterface_StompObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStompInterface_StompObject_Statics::NewProp_hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStompInterface_StompObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "StompInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStompInterface_StompObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStompInterface, nullptr, "StompObject", nullptr, nullptr, Z_Construct_UFunction_UStompInterface_StompObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStompInterface_StompObject_Statics::PropPointers), sizeof(StompInterface_eventStompObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStompInterface_StompObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStompInterface_StompObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStompInterface_StompObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(StompInterface_eventStompObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UStompInterface_StompObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStompInterface_StompObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStompInterface);
	UClass* Z_Construct_UClass_UStompInterface_NoRegister()
	{
		return UStompInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStompInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStompInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStompInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UStompInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStompInterface_StompObject, "StompObject" }, // 603640323
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStompInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStompInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "StompInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStompInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStompInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStompInterface_Statics::ClassParams = {
		&UStompInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStompInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UStompInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStompInterface()
	{
		if (!Z_Registration_Info_UClass_UStompInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStompInterface.OuterSingleton, Z_Construct_UClass_UStompInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStompInterface.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UStompInterface>()
	{
		return UStompInterface::StaticClass();
	}
	UStompInterface::UStompInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStompInterface);
	UStompInterface::~UStompInterface() {}
	static FName NAME_UStompInterface_StompObject = FName(TEXT("StompObject"));
	void IStompInterface::Execute_StompObject(UObject* O, FHitResult hit)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStompInterface::StaticClass()));
		StompInterface_eventStompObject_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStompInterface_StompObject);
		if (Func)
		{
			Parms.hit=hit;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStompInterface*)(O->GetNativeInterfaceAddress(UStompInterface::StaticClass())))
		{
			I->StompObject_Implementation(hit);
		}
	}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_StompInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_StompInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStompInterface, UStompInterface::StaticClass, TEXT("UStompInterface"), &Z_Registration_Info_UClass_UStompInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStompInterface), 414902198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_StompInterface_h_3000130817(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_StompInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Github_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_StompInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
