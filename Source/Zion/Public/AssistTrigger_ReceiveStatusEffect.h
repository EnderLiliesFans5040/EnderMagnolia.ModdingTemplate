#pragma once
#include "CoreMinimal.h"
#include "AssistTrigger.h"
#include "EStatusEffectType.h"
#include "AssistTrigger_ReceiveStatusEffect.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UAssistTrigger_ReceiveStatusEffect : public UAssistTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStatusEffectType> ValidStatusEffects;
    
public:
    UAssistTrigger_ReceiveStatusEffect();

private:
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectLaunched(UStatusEffect* StatusEffect);
    
};

