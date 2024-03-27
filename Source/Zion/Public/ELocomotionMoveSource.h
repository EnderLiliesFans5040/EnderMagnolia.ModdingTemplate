#pragma once
#include "CoreMinimal.h"
#include "ELocomotionMoveSource.generated.h"

UENUM(BlueprintType)
enum class ELocomotionMoveSource : uint8 {
    PendingInputVector,
    Velocity,
};

