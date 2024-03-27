#pragma once
#include "CoreMinimal.h"
#include "ECollisionProfile.generated.h"

UENUM(BlueprintType)
enum class ECollisionProfile : uint8 {
    NoCollision,
    Player,
    Enemy,
    NPC,
    Spirit,
    PlayerDead,
    EnemyDead,
};

