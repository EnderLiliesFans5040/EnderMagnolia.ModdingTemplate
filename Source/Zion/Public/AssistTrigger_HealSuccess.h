#pragma once
#include "CoreMinimal.h"
#include "AssistTrigger.h"
#include "AssistTrigger_HealSuccess.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAssistTrigger_HealSuccess : public UAssistTrigger {
    GENERATED_BODY()
public:
    UAssistTrigger_HealSuccess();

private:
    UFUNCTION(BlueprintCallable)
    void OnHealSucceeded();
    
};

