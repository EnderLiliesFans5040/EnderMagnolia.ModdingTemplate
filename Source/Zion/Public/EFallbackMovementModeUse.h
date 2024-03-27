#pragma once
#include "CoreMinimal.h"
#include "EFallbackMovementModeUse.generated.h"

UENUM(BlueprintType)
enum class EFallbackMovementModeUse : uint8 {
    MovementNull,
    MovementNullOrInactive,
    Always,
};

