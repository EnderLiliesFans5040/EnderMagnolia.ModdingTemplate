#pragma once
#include "CoreMinimal.h"
#include "EAbilityWeightCategory.generated.h"

UENUM(BlueprintType)
enum class EAbilityWeightCategory : uint8 {
    None,
    Light = 10,
    Medium = 20,
    Heavy = 30,
};

