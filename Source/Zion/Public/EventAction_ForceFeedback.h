#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_ForceFeedback.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UEventAction_ForceFeedback : public UEventAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
public:
    UEventAction_ForceFeedback();

};

