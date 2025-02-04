#pragma once
#include "CoreMinimal.h"
#include "EWarpOffsetMode.generated.h"

UENUM(BlueprintType)
enum class EWarpOffsetMode : uint8 {
    None,
    Absolute,
    Random,
};

