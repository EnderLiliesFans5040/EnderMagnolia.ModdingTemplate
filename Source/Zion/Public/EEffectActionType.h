#pragma once
#include "CoreMinimal.h"
#include "EEffectActionType.generated.h"

UENUM(BlueprintType)
enum class EEffectActionType : uint8 {
    None,
    Cut,
    Blow,
    MagicBullet,
    Magic,
};

