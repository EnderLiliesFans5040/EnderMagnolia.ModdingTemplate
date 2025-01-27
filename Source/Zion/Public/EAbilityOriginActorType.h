#pragma once
#include "CoreMinimal.h"
#include "EAbilityOriginActorType.generated.h"

UENUM()
enum class EAbilityOriginActorType : int32 {
    Source,
    ClosestEnemy,
    Spawner,
};

