#pragma once
#include "CoreMinimal.h"
#include "EHookType.generated.h"

UENUM(BlueprintType)
enum class EHookType : uint8 {
    None,
    Point,
    OverrideLocation,
    Attach,
};

