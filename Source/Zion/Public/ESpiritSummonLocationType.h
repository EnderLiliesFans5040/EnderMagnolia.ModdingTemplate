#pragma once
#include "CoreMinimal.h"
#include "ESpiritSummonLocationType.generated.h"

UENUM(BlueprintType)
enum class ESpiritSummonLocationType : uint8 {
    Reset,
    Keep,
    Blend,
    KeepOrBlendOnFacingChange,
};

