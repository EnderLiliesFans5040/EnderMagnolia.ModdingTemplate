#pragma once
#include "CoreMinimal.h"
#include "EDashChargeMode.generated.h"

UENUM(BlueprintType)
enum class EDashChargeMode : uint8 {
    None,
    Ground,
    Swim,
};

