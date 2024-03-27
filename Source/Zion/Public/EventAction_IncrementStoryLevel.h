#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_IncrementStoryLevel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_IncrementStoryLevel : public UEventAction {
    GENERATED_BODY()
public:
    UEventAction_IncrementStoryLevel();

};

