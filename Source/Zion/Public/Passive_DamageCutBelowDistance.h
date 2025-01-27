#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_DamageCutBelowDistance.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_DamageCutBelowDistance : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_DamageCutBelowDistance();

};

