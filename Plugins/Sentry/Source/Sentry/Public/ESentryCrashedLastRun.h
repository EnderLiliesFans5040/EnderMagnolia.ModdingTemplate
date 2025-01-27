#pragma once
#include "CoreMinimal.h"
#include "ESentryCrashedLastRun.generated.h"

UENUM(BlueprintType)
enum class ESentryCrashedLastRun : uint8 {
    NotEvaluated,
    NotCrashed,
    Crashed,
};

