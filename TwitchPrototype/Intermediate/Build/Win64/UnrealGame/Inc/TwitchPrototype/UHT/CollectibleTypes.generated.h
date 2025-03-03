// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CollectibleTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWITCHPROTOTYPE_CollectibleTypes_generated_h
#error "CollectibleTypes.generated.h already included, missing '#pragma once' in CollectibleTypes.h"
#endif
#define TWITCHPROTOTYPE_CollectibleTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_Unreal_Projects_Twitch_Project_TwitchPrototype_Source_TwitchPrototype_Public_CollectibleTypes_h


#define FOREACH_ENUM_ECOLLECTIBLETYPES(op) \
	op(ECollectibleTypes::ECT_Primary) \
	op(ECollectibleTypes::ECT_Secondary) 

enum class ECollectibleTypes;
template<> struct TIsUEnumClass<ECollectibleTypes> { enum { Value = true }; };
template<> TWITCHPROTOTYPE_API UEnum* StaticEnum<ECollectibleTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
