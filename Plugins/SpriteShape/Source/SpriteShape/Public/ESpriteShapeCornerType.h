#pragma once
#include "CoreMinimal.h"
#include "ESpriteShapeCornerType.generated.h"

UENUM(BlueprintType)
enum class ESpriteShapeCornerType : uint8 {
    None,
    OuterTopLeft,
    OuterTopRight,
    OuterBottomLeft,
    OuterBottomRight,
    InnerTopLeft,
    InnerTopRight,
    InnerBottomLeft,
    InnerBottomRight,
};

