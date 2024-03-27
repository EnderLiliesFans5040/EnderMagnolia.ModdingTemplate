#pragma once
#include "CoreMinimal.h"
#include "EActorPivotTarget.generated.h"

UENUM(BlueprintType)
enum class EActorPivotTarget : uint8 {
    Center,
    Bottom,
    Top,
};

