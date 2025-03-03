#pragma once

UENUM(BlueprintType)
enum class ECollectibleTypes : uint8
{
	ECT_Primary UMETA(DisplayName = "Primary Collectible"),
	ECT_Secondary UMETA(DisplayName = "Secondary Collectible"),
	ECT_MAX UMETA(DisplayName = "DefaultMAX")
};