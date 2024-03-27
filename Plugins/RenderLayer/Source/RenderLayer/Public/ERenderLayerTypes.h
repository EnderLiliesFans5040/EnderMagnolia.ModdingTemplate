#pragma once
#include "CoreMinimal.h"
#include "ERenderLayerTypes.generated.h"

UENUM(BlueprintType)
enum class ERenderLayerTypes : uint8 {
    Default,
    BossBack = 4,
    Boss,
    BossFront,
    Companion = 10,
    EnemyBack = 20,
    SpiritDefault = 30,
    EnemyDefault = 40,
    AboveEnemyBelowPlayer = 50,
    Player = 60,
    AbovePlayerBelowSpiritFront = 70,
    SpiritFront = 80,
    AbovePlayer = 90,
};

