#pragma once
#include "CoreMinimal.h"
#include "EDistanceComparisonType.generated.h"

UENUM(BlueprintType)
enum class EDistanceComparisonType : uint8 {
    Distance3D,
    DistanceX,
    DistanceY,
    DistanceZ,
};

