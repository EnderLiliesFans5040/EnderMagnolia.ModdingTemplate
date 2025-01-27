#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_FreezeDamage.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_FreezeDamage : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_FreezeDamage();

};

