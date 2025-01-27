#pragma once
#include "CoreMinimal.h"
#include "ESpiritSummonRotationType.generated.h"

UENUM(BlueprintType)
enum class ESpiritSummonRotationType : uint8 {
    Keep,
    Reset,
    Absolute,
};

