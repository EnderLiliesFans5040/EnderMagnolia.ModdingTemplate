#pragma once
#include "CoreMinimal.h"
#include "EAttackType.h"
#include "Passive.h"
#include "Passive_AttackTypeBonus.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_AttackTypeBonus : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_AttackTypeBonus();

};

