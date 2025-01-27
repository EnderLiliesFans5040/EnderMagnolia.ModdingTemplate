#pragma once
#include "CoreMinimal.h"
#include "EAuraFXDeactivateTiming.generated.h"

UENUM(BlueprintType)
enum class EAuraFXDeactivateTiming : uint8 {
    None,
    OnDeathProcessStart,
};

