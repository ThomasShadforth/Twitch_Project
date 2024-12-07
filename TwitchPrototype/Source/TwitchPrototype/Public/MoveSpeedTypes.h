#pragma once

UENUM(BlueprintType)
enum class EMoveSpeedTypes : uint8
{
	EMST_Idle UMETA(DisplayName = "Idle"),
	EMST_Walk UMETA(DisplayName = "Walk"),
	EMST_Jog UMETA(DisplayName = "Jog"),
	EMST_Sprint UMETA(DisplayName = "Sprint"),
	EMST_MAX UMETA(DisplayName = "DefaultMAX")
};