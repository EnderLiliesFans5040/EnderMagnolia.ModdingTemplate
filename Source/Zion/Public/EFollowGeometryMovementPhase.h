#pragma once
#include "CoreMinimal.h"
#include "EFollowGeometryMovementPhase.generated.h"

UENUM(BlueprintType)
enum class EFollowGeometryMovementPhase : uint8 {
    None,
    Moving,
    Falling,
    Turning,
};

