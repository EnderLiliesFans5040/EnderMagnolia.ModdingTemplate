#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "AbilityEffectInstant_ForceFeedback.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_ForceFeedback : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
public:
    UAbilityEffectInstant_ForceFeedback();

};

