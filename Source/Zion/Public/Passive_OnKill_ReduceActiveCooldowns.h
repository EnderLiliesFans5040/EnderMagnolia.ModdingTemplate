#pragma once
#include "CoreMinimal.h"
#include "Passive_OnKill.h"
#include "Passive_OnKill_ReduceActiveCooldowns.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnKill_ReduceActiveCooldowns : public UPassive_OnKill {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReductionPercentage;
    
public:
    UPassive_OnKill_ReduceActiveCooldowns();

};

