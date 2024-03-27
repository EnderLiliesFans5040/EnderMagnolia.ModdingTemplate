#pragma once
#include "CoreMinimal.h"
#include "EMovementSpeedMode.h"
#include "SurfaceToStepMap.h"
#include "SpeedModeToSurfaceMap.generated.h"

USTRUCT(BlueprintType)
struct FSpeedModeToSurfaceMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMovementSpeedMode, FSurfaceToStepMap> SpeedModes;
    
    ZION_API FSpeedModeToSurfaceMap();
};

