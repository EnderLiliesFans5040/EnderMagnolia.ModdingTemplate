#pragma once
#include "CoreMinimal.h"
#include "EOrientTargetType.generated.h"

UENUM(BlueprintType)
enum class EOrientTargetType : uint8 {
    None,
    Actor,
    Component,
    VisualPivot,
};

