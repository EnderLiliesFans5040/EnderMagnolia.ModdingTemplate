#pragma once
#include "CoreMinimal.h"
#include "ESpiritDismissType.generated.h"

UENUM(BlueprintType)
enum class ESpiritDismissType : uint8 {
    Manual,
    CommandQueueEnd,
    SummonInputActionReleased,
};

