#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_ReduceKnockbackImpulseForce.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_ReduceKnockbackImpulseForce : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImpulseForceReductionPercentage;
    
public:
    UPassive_ReduceKnockbackImpulseForce();

};

