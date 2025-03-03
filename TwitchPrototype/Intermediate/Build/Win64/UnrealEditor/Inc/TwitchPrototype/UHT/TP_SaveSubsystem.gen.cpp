// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwitchPrototype/Public/Subsystems/TP_SaveSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_SaveSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UGameSaveData_NoRegister();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_SaveSubsystem();
	TWITCHPROTOTYPE_API UClass* Z_Construct_UClass_UTP_SaveSubsystem_NoRegister();
	TWITCHPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature();
	TWITCHPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature();
	TWITCHPROTOTYPE_API UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TwitchPrototype();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics
	{
		struct _Script_TwitchPrototype_eventSaveSubSystemSaveGameCreated_Parms
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
	void Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_TwitchPrototype_eventSaveSubSystemSaveGameCreated_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwitchPrototype_eventSaveSubSystemSaveGameCreated_Parms), &Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class USaveGame;\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class USaveGame;" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype, nullptr, "SaveSubSystemSaveGameCreated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::_Script_TwitchPrototype_eventSaveSubSystemSaveGameCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::_Script_TwitchPrototype_eventSaveSubSystemSaveGameCreated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSaveSubSystemSaveGameCreated_DelegateWrapper(const FMulticastScriptDelegate& SaveSubSystemSaveGameCreated, bool bSuccess)
{
	struct _Script_TwitchPrototype_eventSaveSubSystemSaveGameCreated_Parms
	{
		bool bSuccess;
	};
	_Script_TwitchPrototype_eventSaveSubSystemSaveGameCreated_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	SaveSubSystemSaveGameCreated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics
	{
		struct _Script_TwitchPrototype_eventSaveSubSystemSaveGameLoaded_Parms
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
	void Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_TwitchPrototype_eventSaveSubSystemSaveGameLoaded_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwitchPrototype_eventSaveSubSystemSaveGameLoaded_Parms), &Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype, nullptr, "SaveSubSystemSaveGameLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::_Script_TwitchPrototype_eventSaveSubSystemSaveGameLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::_Script_TwitchPrototype_eventSaveSubSystemSaveGameLoaded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSaveSubSystemSaveGameLoaded_DelegateWrapper(const FMulticastScriptDelegate& SaveSubSystemSaveGameLoaded, bool bSuccess)
{
	struct _Script_TwitchPrototype_eventSaveSubSystemSaveGameLoaded_Parms
	{
		bool bSuccess;
	};
	_Script_TwitchPrototype_eventSaveSubSystemSaveGameLoaded_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	SaveSubSystemSaveGameLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics
	{
		struct _Script_TwitchPrototype_eventSaveSubSystemSaveGameSaveStarted_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwitchPrototype_eventSaveSubSystemSaveGameSaveStarted_Parms, SaveGame), Z_Construct_UClass_UGameSaveData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::NewProp_SaveGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchPrototype, nullptr, "SaveSubSystemSaveGameSaveStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::_Script_TwitchPrototype_eventSaveSubSystemSaveGameSaveStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::_Script_TwitchPrototype_eventSaveSubSystemSaveGameSaveStarted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSaveSubSystemSaveGameSaveStarted_DelegateWrapper(const FMulticastScriptDelegate& SaveSubSystemSaveGameSaveStarted, UGameSaveData* SaveGame)
{
	struct _Script_TwitchPrototype_eventSaveSubSystemSaveGameSaveStarted_Parms
	{
		UGameSaveData* SaveGame;
	};
	_Script_TwitchPrototype_eventSaveSubSystemSaveGameSaveStarted_Parms Parms;
	Parms.SaveGame=SaveGame;
	SaveSubSystemSaveGameSaveStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UTP_SaveSubsystem::execHandleLoadSaveGameCompleted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_GET_OBJECT(USaveGame,Z_Param_LoadedGameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLoadSaveGameCompleted(Z_Param_slotName,Z_Param_UserIndex,Z_Param_LoadedGameData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTP_SaveSubsystem::execHandleCreateNewSaveCompleted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCreateNewSaveCompleted(Z_Param_slotName,Z_Param_UserIndex,Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTP_SaveSubsystem::execSaveGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame(Z_Param_slotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTP_SaveSubsystem::execLoadSaveGame)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSaveGame(Z_Param_slotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTP_SaveSubsystem::execCreateNewSaveData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_slotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateNewSaveData(Z_Param_slotName);
		P_NATIVE_END;
	}
	void UTP_SaveSubsystem::StaticRegisterNativesUTP_SaveSubsystem()
	{
		UClass* Class = UTP_SaveSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewSaveData", &UTP_SaveSubsystem::execCreateNewSaveData },
			{ "HandleCreateNewSaveCompleted", &UTP_SaveSubsystem::execHandleCreateNewSaveCompleted },
			{ "HandleLoadSaveGameCompleted", &UTP_SaveSubsystem::execHandleLoadSaveGameCompleted },
			{ "LoadSaveGame", &UTP_SaveSubsystem::execLoadSaveGame },
			{ "SaveGame", &UTP_SaveSubsystem::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics
	{
		struct TP_SaveSubsystem_eventCreateNewSaveData_Parms
		{
			FString slotName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_SaveSubsystem_eventCreateNewSaveData_Parms, slotName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::NewProp_slotName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_SaveSubsystem, nullptr, "CreateNewSaveData", nullptr, nullptr, Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::TP_SaveSubsystem_eventCreateNewSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::TP_SaveSubsystem_eventCreateNewSaveData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics
	{
		struct TP_SaveSubsystem_eventHandleCreateNewSaveCompleted_Parms
		{
			FString slotName;
			int32 UserIndex;
			bool bSuccess;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_SaveSubsystem_eventHandleCreateNewSaveCompleted_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_slotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_SaveSubsystem_eventHandleCreateNewSaveCompleted_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_UserIndex_MetaData), Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_UserIndex_MetaData) };
	void Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((TP_SaveSubsystem_eventHandleCreateNewSaveCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TP_SaveSubsystem_eventHandleCreateNewSaveCompleted_Parms), &Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_SaveSubsystem, nullptr, "HandleCreateNewSaveCompleted", nullptr, nullptr, Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::TP_SaveSubsystem_eventHandleCreateNewSaveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::TP_SaveSubsystem_eventHandleCreateNewSaveCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics
	{
		struct TP_SaveSubsystem_eventHandleLoadSaveGameCompleted_Parms
		{
			FString slotName;
			int32 UserIndex;
			USaveGame* LoadedGameData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedGameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_slotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_SaveSubsystem_eventHandleLoadSaveGameCompleted_Parms, slotName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_slotName_MetaData), Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_slotName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_SaveSubsystem_eventHandleLoadSaveGameCompleted_Parms, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_UserIndex_MetaData), Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_UserIndex_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_LoadedGameData = { "LoadedGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_SaveSubsystem_eventHandleLoadSaveGameCompleted_Parms, LoadedGameData), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_slotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::NewProp_LoadedGameData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_SaveSubsystem, nullptr, "HandleLoadSaveGameCompleted", nullptr, nullptr, Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::TP_SaveSubsystem_eventHandleLoadSaveGameCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::TP_SaveSubsystem_eventHandleLoadSaveGameCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics
	{
		struct TP_SaveSubsystem_eventLoadSaveGame_Parms
		{
			FString slotName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_SaveSubsystem_eventLoadSaveGame_Parms, slotName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::NewProp_slotName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_SaveSubsystem, nullptr, "LoadSaveGame", nullptr, nullptr, Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::TP_SaveSubsystem_eventLoadSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::TP_SaveSubsystem_eventLoadSaveGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics
	{
		struct TP_SaveSubsystem_eventSaveGame_Parms
		{
			FString slotName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_slotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::NewProp_slotName = { "slotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TP_SaveSubsystem_eventSaveGame_Parms, slotName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::NewProp_slotName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTP_SaveSubsystem, nullptr, "SaveGame", nullptr, nullptr, Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::TP_SaveSubsystem_eventSaveGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::TP_SaveSubsystem_eventSaveGame_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTP_SaveSubsystem);
	UClass* Z_Construct_UClass_UTP_SaveSubsystem_NoRegister()
	{
		return UTP_SaveSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTP_SaveSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameCreatedCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SaveGameCreatedCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameLoadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SaveGameLoadCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameSaveStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SaveGameSaveStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_recentlyAccessedSave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_recentlyAccessedSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTP_SaveSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_SaveSubsystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTP_SaveSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTP_SaveSubsystem_CreateNewSaveData, "CreateNewSaveData" }, // 2865529697
		{ &Z_Construct_UFunction_UTP_SaveSubsystem_HandleCreateNewSaveCompleted, "HandleCreateNewSaveCompleted" }, // 3811915243
		{ &Z_Construct_UFunction_UTP_SaveSubsystem_HandleLoadSaveGameCompleted, "HandleLoadSaveGameCompleted" }, // 50286842
		{ &Z_Construct_UFunction_UTP_SaveSubsystem_LoadSaveGame, "LoadSaveGame" }, // 1824105995
		{ &Z_Construct_UFunction_UTP_SaveSubsystem_SaveGame, "SaveGame" }, // 1243665544
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_SaveSubsystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_SaveSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/TP_SaveSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameCreatedCompleted_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameCreatedCompleted = { "SaveGameCreatedCompleted", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_SaveSubsystem, SaveGameCreatedCompleted), Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameCreated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameCreatedCompleted_MetaData), Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameCreatedCompleted_MetaData) }; // 2093888290
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameLoadCompleted_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameLoadCompleted = { "SaveGameLoadCompleted", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_SaveSubsystem, SaveGameLoadCompleted), Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameLoadCompleted_MetaData), Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameLoadCompleted_MetaData) }; // 3791579482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameSaveStarted_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameSaveStarted = { "SaveGameSaveStarted", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_SaveSubsystem, SaveGameSaveStarted), Z_Construct_UDelegateFunction_TwitchPrototype_SaveSubSystemSaveGameSaveStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameSaveStarted_MetaData), Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameSaveStarted_MetaData) }; // 286610255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_recentlyAccessedSave_MetaData[] = {
		{ "Category", "Save System" },
		{ "ModuleRelativePath", "Public/Subsystems/TP_SaveSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_recentlyAccessedSave = { "recentlyAccessedSave", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTP_SaveSubsystem, recentlyAccessedSave), Z_Construct_UClass_UGameSaveData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_recentlyAccessedSave_MetaData), Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_recentlyAccessedSave_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTP_SaveSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameCreatedCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameLoadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_SaveGameSaveStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTP_SaveSubsystem_Statics::NewProp_recentlyAccessedSave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTP_SaveSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTP_SaveSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTP_SaveSubsystem_Statics::ClassParams = {
		&UTP_SaveSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTP_SaveSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTP_SaveSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_SaveSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTP_SaveSubsystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTP_SaveSubsystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTP_SaveSubsystem()
	{
		if (!Z_Registration_Info_UClass_UTP_SaveSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTP_SaveSubsystem.OuterSingleton, Z_Construct_UClass_UTP_SaveSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTP_SaveSubsystem.OuterSingleton;
	}
	template<> TWITCHPROTOTYPE_API UClass* StaticClass<UTP_SaveSubsystem>()
	{
		return UTP_SaveSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTP_SaveSubsystem);
	UTP_SaveSubsystem::~UTP_SaveSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTP_SaveSubsystem, UTP_SaveSubsystem::StaticClass, TEXT("UTP_SaveSubsystem"), &Z_Registration_Info_UClass_UTP_SaveSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTP_SaveSubsystem), 121047311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_4026269691(TEXT("/Script/TwitchPrototype"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_Subsystems_TP_SaveSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
