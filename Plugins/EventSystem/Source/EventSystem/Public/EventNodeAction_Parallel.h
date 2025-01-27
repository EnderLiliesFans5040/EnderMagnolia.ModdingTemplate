#pragma once
#include "CoreMinimal.h"
#include "EventNodeAction.h"
#include "EventNodeAction_Parallel.generated.h"

class UEventAction;

UCLASS(Blueprintable, EditInlineNew)
class EVENTSYSTEM_API UEventNodeAction_Parallel : public UEventNodeAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEventAction*> RunningActions;
    
public:
    UEventNodeAction_Parallel();

};

