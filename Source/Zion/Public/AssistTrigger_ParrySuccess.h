#pragma once
#include "CoreMinimal.h"
#include "AssistTrigger.h"
#include "AssistTrigger_ParrySuccess.generated.h"

class AAbility;
class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UAssistTrigger_ParrySuccess : public UAssistTrigger {
    GENERATED_BODY()
public:
    UAssistTrigger_ParrySuccess();

private:
    UFUNCTION(BlueprintCallable)
    void OnParried(AAbility* Ability, AActor* Source);
    
};

