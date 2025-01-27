#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EStepHeavinessCategory.h"
#include "SpeedModeToSurfaceMap.h"
#include "SurfaceToStepMap.h"
#include "StepMatrixData.generated.h"

UCLASS(Blueprintable)
class UStepMatrixData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStepHeavinessCategory, FSpeedModeToSurfaceMap> StepMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStepHeavinessCategory, FSurfaceToStepMap> WallMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStepHeavinessCategory, FSurfaceToStepMap> CeilingMatrix;
    
    UStepMatrixData();

};

