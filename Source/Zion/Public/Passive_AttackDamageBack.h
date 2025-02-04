#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_AttackDamageBack.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_AttackDamageBack : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_AttackDamageBack();

};

