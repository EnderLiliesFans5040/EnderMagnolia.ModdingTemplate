#pragma once
#include "CoreMinimal.h"
#include "EDismissType.generated.h"

UENUM(BlueprintType)
enum class EDismissType : uint8 {
    None,
    Default,
    Instant,
    Delayed,
};

