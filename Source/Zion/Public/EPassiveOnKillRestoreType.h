#pragma once
#include "CoreMinimal.h"
#include "EPassiveOnKillRestoreType.generated.h"

UENUM(BlueprintType)
enum class EPassiveOnKillRestoreType : uint8 {
    None,
    FlatAmount,
    StatPercentage,
};

