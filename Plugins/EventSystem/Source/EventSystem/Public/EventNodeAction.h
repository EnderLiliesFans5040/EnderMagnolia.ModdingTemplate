#pragma once
#include "CoreMinimal.h"
#include "EventNode.h"
#include "EventNodeAction.generated.h"

class UEventAction;
class UEventCondition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class EVENTSYSTEM_API UEventNodeAction : public UEventNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEventCondition*> EnterConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UEventAction*> Actions;
    
public:
    UEventNodeAction();

};

