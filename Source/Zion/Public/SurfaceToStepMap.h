#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "StepData.h"
#include "SurfaceToStepMap.generated.h"

USTRUCT(BlueprintType)
struct FSurfaceToStepMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FStepData> Surfaces;
    
    ZION_API FSurfaceToStepMap();
};

