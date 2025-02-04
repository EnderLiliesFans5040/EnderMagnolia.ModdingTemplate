#pragma once
#include "CoreMinimal.h"
#include "AssistTrigger.h"
#include "AssistTrigger_TimeInterval.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAssistTrigger_TimeInterval : public UAssistTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeInterval;
    
public:
    UAssistTrigger_TimeInterval();

private:
    UFUNCTION(BlueprintCallable)
    void OnTimeElapsed();
    
};

