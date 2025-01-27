#pragma once
#include "CoreMinimal.h"
#include "ECameraModifierVolumeProcessAction.generated.h"

UENUM(BlueprintType)
enum class ECameraModifierVolumeProcessAction : uint8 {
    None,
    Add,
    Remove,
};

