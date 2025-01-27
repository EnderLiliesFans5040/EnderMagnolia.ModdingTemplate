#pragma once
#include "CoreMinimal.h"
#include "EWarpFacingMode.generated.h"

UENUM(BlueprintType)
enum class EWarpFacingMode : uint8 {
    None,
    WarpTarget,
    EnemyTarget,
    SpawnLocation,
};

