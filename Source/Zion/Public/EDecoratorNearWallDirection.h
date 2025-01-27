#pragma once
#include "CoreMinimal.h"
#include "EDecoratorNearWallDirection.generated.h"

UENUM(BlueprintType)
enum class EDecoratorNearWallDirection : uint8 {
    None,
    Forward,
    Backward,
    Up,
    Down,
    WorldRight,
    WorldLeft,
    WorldUp,
    WorldDown,
};

