#pragma once
#include "CoreMinimal.h"
#include "EFadeLayer.generated.h"

UENUM(BlueprintType)
enum class EFadeLayer : uint8 {
    None,
    Default,
    WorldLoader,
    Zone,
    Event,
};

