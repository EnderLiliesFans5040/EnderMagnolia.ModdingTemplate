#pragma once
#include "CoreMinimal.h"
#include "EClearStatus.generated.h"

UENUM(BlueprintType)
enum class EClearStatus : uint8 {
    Undefined,
    NotCleared,
    Cleared,
};

