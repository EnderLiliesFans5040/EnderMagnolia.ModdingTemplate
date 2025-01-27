#pragma once
#include "CoreMinimal.h"
#include "EMapIconGenerationType.generated.h"

UENUM(BlueprintType)
enum class EMapIconGenerationType : uint8 {
    MatchActorLocation,
    MatchActorCenter,
    MatchActorBounds,
};

