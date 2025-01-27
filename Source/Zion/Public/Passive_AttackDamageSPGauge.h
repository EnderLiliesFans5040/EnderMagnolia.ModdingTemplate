#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_AttackDamageSPGauge.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_AttackDamageSPGauge : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoGaugePercentageBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OneGaugePercentageBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TwoGaugesPercentageBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ThreeGaugesPercentageBonus;
    
public:
    UPassive_AttackDamageSPGauge();

};

