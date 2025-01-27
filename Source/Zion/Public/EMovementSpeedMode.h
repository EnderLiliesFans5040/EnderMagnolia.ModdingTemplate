#pragma once
#include "CoreMinimal.h"
#include "EMovementSpeedMode.generated.h"

UENUM(BlueprintType)
enum class EMovementSpeedMode : uint8 {
    None,
    Default,
    Slow,
    Fast,
    Fastest,
};

