#pragma once
#include "CoreMinimal.h"
#include "ESpriteShapeCollisionTraceFlag.generated.h"

UENUM(BlueprintType)
enum class ESpriteShapeCollisionTraceFlag : uint8 {
    Default,
    SimpleAsComplex,
    ComplexAsSimple,
};

