#pragma once
#include "CoreMinimal.h"
#include "EHighJumpStopCondition.generated.h"

UENUM(BlueprintType)
enum class EHighJumpStopCondition : uint8 {
    None,
    Distance,
    Duration,
};

