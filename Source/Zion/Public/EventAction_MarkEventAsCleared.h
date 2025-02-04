#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_MarkEventAsCleared.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_MarkEventAsCleared : public UEventAction {
    GENERATED_BODY()
public:
    UEventAction_MarkEventAsCleared();

};

