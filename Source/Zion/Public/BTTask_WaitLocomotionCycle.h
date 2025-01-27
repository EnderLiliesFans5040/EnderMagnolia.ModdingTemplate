#pragma once
#include "CoreMinimal.h"
#include "BTTaskZion.h"
#include "BTTask_WaitLocomotionCycle.generated.h"

UCLASS(Blueprintable)
class UBTTask_WaitLocomotionCycle : public UBTTaskZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocomotionCycleMinPercentage;
    
public:
    UBTTask_WaitLocomotionCycle();

};

