#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_AttackDamageMinSP.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_AttackDamageMinSP : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SPPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_AttackDamageMinSP();

};

