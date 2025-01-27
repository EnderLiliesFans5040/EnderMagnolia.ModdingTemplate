#pragma once
#include "CoreMinimal.h"
#include "EWarpWorldSpaceOffsetType.generated.h"

UENUM(BlueprintType)
enum class EWarpWorldSpaceOffsetType : uint8 {
    None,
    Constant,
    RandomRange,
};

