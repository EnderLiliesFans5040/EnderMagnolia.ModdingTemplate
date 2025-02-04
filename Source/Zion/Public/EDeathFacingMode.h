#pragma once
#include "CoreMinimal.h"
#include "EDeathFacingMode.generated.h"

UENUM(BlueprintType)
enum class EDeathFacingMode : uint8 {
    None,
    Left,
    Right,
    TowardEnemySpawner,
    FallbackTowardEnemySpawner,
};

