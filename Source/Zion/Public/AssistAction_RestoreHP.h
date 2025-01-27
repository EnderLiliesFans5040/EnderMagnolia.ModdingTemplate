#pragma once
#include "CoreMinimal.h"
#include "AssistAction.h"
#include "AssistAction_RestoreHP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAssistAction_RestoreHP : public UAssistAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPPercentage;
    
public:
    UAssistAction_RestoreHP();

};

