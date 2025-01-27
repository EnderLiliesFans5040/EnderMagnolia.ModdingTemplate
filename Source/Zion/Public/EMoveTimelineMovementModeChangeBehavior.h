#pragma once
#include "CoreMinimal.h"
#include "EMoveTimelineMovementModeChangeBehavior.generated.h"

UENUM(BlueprintType)
enum class EMoveTimelineMovementModeChangeBehavior : uint8 {
    None,
    Finish,
    Abort,
};

