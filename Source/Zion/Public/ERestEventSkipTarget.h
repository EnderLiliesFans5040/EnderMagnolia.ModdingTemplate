#pragma once
#include "CoreMinimal.h"
#include "ERestEventSkipTarget.generated.h"

UENUM(BlueprintType)
enum class ERestEventSkipTarget : uint8 {
    None,
    FadeIn,
    BossRush,
    BossRecollection,
};

