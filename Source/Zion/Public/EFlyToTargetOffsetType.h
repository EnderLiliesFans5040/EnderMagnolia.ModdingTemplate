#pragma once
#include "CoreMinimal.h"
#include "EFlyToTargetOffsetType.generated.h"

UENUM(BlueprintType)
enum class EFlyToTargetOffsetType : uint8 {
    None,
    Absolute,
    RandomBox,
};

