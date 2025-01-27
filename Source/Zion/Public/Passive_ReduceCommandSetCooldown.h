#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_ReduceCommandSetCooldown.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_ReduceCommandSetCooldown : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_ReduceCommandSetCooldown();

};

