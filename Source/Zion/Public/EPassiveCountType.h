#pragma once
#include "CoreMinimal.h"
#include "EPassiveCountType.generated.h"

UENUM(BlueprintType)
enum class EPassiveCountType : uint8 {
    None,
    Finding,
    Upgrade,
};

