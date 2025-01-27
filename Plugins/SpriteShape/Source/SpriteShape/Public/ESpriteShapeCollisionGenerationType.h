#pragma once
#include "CoreMinimal.h"
#include "ESpriteShapeCollisionGenerationType.generated.h"

UENUM(BlueprintType)
enum class ESpriteShapeCollisionGenerationType : uint8 {
    PolygonBatching,
    Box,
    Custom,
    Polygon,
};

