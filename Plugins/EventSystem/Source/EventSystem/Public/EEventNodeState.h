#pragma once
#include "CoreMinimal.h"
#include "EEventNodeState.generated.h"

UENUM(BlueprintType)
enum class EEventNodeState : uint8 {
    None,
    InProgress,
    Finished,
};

