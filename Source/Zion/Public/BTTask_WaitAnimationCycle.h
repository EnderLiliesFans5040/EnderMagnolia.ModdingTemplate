#pragma once
#include "CoreMinimal.h"
#include "BTTaskZion.h"
#include "BTTask_WaitAnimationCycle.generated.h"

UCLASS(Blueprintable)
class UBTTask_WaitAnimationCycle : public UBTTaskZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationCycleMinPercentage;
    
public:
    UBTTask_WaitAnimationCycle();

};

