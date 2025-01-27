#pragma once
#include "CoreMinimal.h"
#include "EEventActionState.generated.h"

UENUM(BlueprintType)
enum class EEventActionState : uint8 {
    None,
    InProgress,
    Finished,
};

