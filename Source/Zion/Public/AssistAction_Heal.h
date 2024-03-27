#pragma once
#include "CoreMinimal.h"
#include "AssistAction.h"
#include "AssistAction_Heal.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAssistAction_Heal : public UAssistAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealPercentage;
    
public:
    UAssistAction_Heal();

};

