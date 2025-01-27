#pragma once
#include "CoreMinimal.h"
#include "ETimelineResult.generated.h"

UENUM(BlueprintType)
enum class ETimelineResult : uint8 {
    None,
    InProgress,
    Finished,
};

