#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_AttackDamageMaxHP.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_AttackDamageMaxHP : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HPPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_AttackDamageMaxHP();

};

