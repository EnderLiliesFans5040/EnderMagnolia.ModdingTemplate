#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_DamageCutMaxHP.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_DamageCutMaxHP : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HPPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_DamageCutMaxHP();

};

