#pragma once
#include "CoreMinimal.h"
#include "EWarpExecutionTiming.generated.h"

UENUM()
enum class EWarpExecutionTiming : int32 {
    AtStart,
    AtTime,
    AtAnimationStart,
};

