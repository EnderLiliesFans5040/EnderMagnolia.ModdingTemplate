#pragma once
#include "CoreMinimal.h"
#include "EBloomBoxGenerationTiming.generated.h"

UENUM(BlueprintType)
enum class EBloomBoxGenerationTiming : uint8 {
    None,
    OnConstruct,
    OnAnyChildPaintInvalidation,
    OnPaint,
};

