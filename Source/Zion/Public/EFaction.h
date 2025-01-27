#pragma once
#include "CoreMinimal.h"
#include "EFaction.generated.h"

UENUM(BlueprintType)
enum class EFaction : uint8 {
    None,
    Player,
    Spirit,
    Enemy,
    NPC,
    BreakableBlock,
    BreakableDrop,
    LevelHazard,
};

