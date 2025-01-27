#pragma once
#include "CoreMinimal.h"
#include "AssistTrigger.h"
#include "AssistTrigger_HPPercentage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAssistTrigger_HPPercentage : public UAssistTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HPPercentage;
    
public:
    UAssistTrigger_HPPercentage();

};

