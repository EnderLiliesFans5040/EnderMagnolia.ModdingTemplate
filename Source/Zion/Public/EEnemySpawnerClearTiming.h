#pragma once
#include "CoreMinimal.h"
#include "EEnemySpawnerClearTiming.generated.h"

UENUM(BlueprintType)
enum class EEnemySpawnerClearTiming : uint8 {
    None,
    OnDeathProcessStart,
    OnDeathProcessEnd,
};

