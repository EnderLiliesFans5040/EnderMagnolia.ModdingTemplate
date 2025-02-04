#pragma once
#include "CoreMinimal.h"
#include "EHitBoxTargetType.generated.h"

UENUM(BlueprintType)
enum class EHitBoxTargetType : uint8 {
    Opponents,
    Allies = 10,
    All = 20,
    None = 25,
    Custom = 30,
};

