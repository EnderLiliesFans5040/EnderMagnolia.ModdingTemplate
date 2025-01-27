#pragma once
#include "CoreMinimal.h"
#include "ECameraModifierActivationType.generated.h"

UENUM(BlueprintType)
enum class ECameraModifierActivationType : uint8 {
    None,
    ActivationBox,
    Manual,
};

