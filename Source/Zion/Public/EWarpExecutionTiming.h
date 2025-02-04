#pragma once
#include "CoreMinimal.h"
#include "EWarpExecutionTiming.generated.h"

UENUM(BlueprintType)
enum class EWarpExecutionTiming : uint8 {
    AtStart,
    AtTime,
    AtAnimationStart,
};

