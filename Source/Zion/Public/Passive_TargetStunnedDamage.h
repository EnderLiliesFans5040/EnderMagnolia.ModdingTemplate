#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_TargetStunnedDamage.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_TargetStunnedDamage : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_TargetStunnedDamage();

};

