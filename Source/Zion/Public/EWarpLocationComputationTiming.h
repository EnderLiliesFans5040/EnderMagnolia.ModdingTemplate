#pragma once
#include "CoreMinimal.h"
#include "EWarpLocationComputationTiming.generated.h"

UENUM(BlueprintType)
enum class EWarpLocationComputationTiming : uint8 {
    AtStart,
    AtWarp,
};

