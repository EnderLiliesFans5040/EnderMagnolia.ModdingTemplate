#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectTimed.h"
#include "AbilityEffectTimed_HitStop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectTimed_HitStop : public UAbilityEffectTimed {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnSourceSummoner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    UAbilityEffectTimed_HitStop();

};

