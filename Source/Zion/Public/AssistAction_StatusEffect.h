#pragma once
#include "CoreMinimal.h"
#include "AssistAction.h"
#include "Templates/SubclassOf.h"
#include "AssistAction_StatusEffect.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew)
class UAssistAction_StatusEffect : public UAssistAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffectClass;
    
public:
    UAssistAction_StatusEffect();

};

