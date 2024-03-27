#pragma once
#include "CoreMinimal.h"
#include "AssistAction.h"
#include "AssistAction_SPGagePercentageUp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAssistAction_SPGagePercentageUp : public UAssistAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SPGagePercentageUp;
    
public:
    UAssistAction_SPGagePercentageUp();

};

