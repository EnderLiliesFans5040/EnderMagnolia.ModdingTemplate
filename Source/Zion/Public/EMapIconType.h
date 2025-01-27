#pragma once
#include "CoreMinimal.h"
#include "EMapIconType.generated.h"

UENUM(BlueprintType)
enum class EMapIconType : uint8 {
    None,
    PlayerLocation,
    RestPoint,
    Switch,
    Door,
    MagicBarrier,
    MagicDoor,
    Breakable,
    Tumor,
    Locked,
    Shop,
    Item,
    AreaChange,
    Warp,
    LilyLock,
    ZoneIncomplete,
    ZoneComplete,
    AreaIncomplete,
    AreaComplete,
};

