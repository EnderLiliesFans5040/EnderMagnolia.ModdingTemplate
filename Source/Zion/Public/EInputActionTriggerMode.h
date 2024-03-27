#pragma once
#include "CoreMinimal.h"
#include "EInputActionTriggerMode.generated.h"

UENUM(BlueprintType)
enum class EInputActionTriggerMode : uint8 {
    None,
    JustTriggered,
    Triggering,
};

