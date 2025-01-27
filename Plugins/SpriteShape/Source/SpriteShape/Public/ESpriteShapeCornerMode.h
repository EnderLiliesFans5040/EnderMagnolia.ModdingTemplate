#pragma once
#include "CoreMinimal.h"
#include "ESpriteShapeCornerMode.generated.h"

UENUM(BlueprintType)
enum class ESpriteShapeCornerMode : uint8 {
    Off,
    On,
    ReplaceCap,
};

