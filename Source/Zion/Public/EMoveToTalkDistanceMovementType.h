#pragma once
#include "CoreMinimal.h"
#include "EMoveToTalkDistanceMovementType.generated.h"

UENUM(BlueprintType)
enum class EMoveToTalkDistanceMovementType : uint8 {
    None,
    Closer,
    Left,
    Right,
    FrontOfTarget,
    BackOfTarget,
};

