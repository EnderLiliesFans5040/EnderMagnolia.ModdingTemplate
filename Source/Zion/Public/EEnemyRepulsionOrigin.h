#pragma once
#include "CoreMinimal.h"
#include "EEnemyRepulsionOrigin.generated.h"

UENUM(BlueprintType)
enum class EEnemyRepulsionOrigin : uint8 {
    ColliderCenter,
    ActorCenter,
    ActorLocation,
};

