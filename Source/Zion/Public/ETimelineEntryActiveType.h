#pragma once
#include "CoreMinimal.h"
#include "ETimelineEntryActiveType.generated.h"

UENUM(BlueprintType)
enum class ETimelineEntryActiveType : uint8 {
    OneShot,
    UntilEndTime,
    UntilTimelineStop,
};

