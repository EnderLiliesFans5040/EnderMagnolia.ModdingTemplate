#pragma once
#include "CoreMinimal.h"
#include "EAbilityInstantTarget.generated.h"

UENUM(BlueprintType)
enum class EAbilityInstantTarget : uint8 {
    None,
    Player,
    OverlapSphere,
};

