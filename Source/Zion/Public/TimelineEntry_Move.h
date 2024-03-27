#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/RootMotionSource.h"
#include "RootMotionFinishVelocitySettingsBP.h"
#include "TimelineEntry.h"
#include "TimelineEntry_Move.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTimelineEntry_Move : public FTimelineEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERootMotionAccumulateMode AccumulateMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MoveFactorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionFinishVelocitySettingsBP FinishVelocitySettings;
    
public:
    ZION_API FTimelineEntry_Move();
};

