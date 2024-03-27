#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "EHealEffectType.h"
#include "AbilityEffectInstant_HealHP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_HealHP : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EHealEffectType HealEffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsoluteHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPercentageHeal;
    
public:
    UAbilityEffectInstant_HealHP();

};

