#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "CustomRuntimeFloatCurve.generated.h"

USTRUCT(BlueprintType)
struct FCustomRuntimeFloatCurve : public FRuntimeFloatCurve {
    GENERATED_BODY()
public:
    ZION_API FCustomRuntimeFloatCurve();
};

