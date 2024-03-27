#pragma once
#include "CoreMinimal.h"
#include "EElevatorState.generated.h"

UENUM(BlueprintType)
enum class EElevatorState : uint8 {
    Undefined,
    Origin,
    Destination,
};

