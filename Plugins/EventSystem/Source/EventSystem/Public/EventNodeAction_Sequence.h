#pragma once
#include "CoreMinimal.h"
#include "EventNodeAction.h"
#include "EventNodeAction_Sequence.generated.h"

class UEventAction;

UCLASS(Blueprintable, EditInlineNew)
class EVENTSYSTEM_API UEventNodeAction_Sequence : public UEventNodeAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEventAction*> RunningActions;
    
public:
    UEventNodeAction_Sequence();

};

