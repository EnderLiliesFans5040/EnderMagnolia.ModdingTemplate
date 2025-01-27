#pragma once
#include "CoreMinimal.h"
#include "EventAction_ShowHideActor.h"
#include "EventAction_HideActor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_HideActor : public UEventAction_ShowHideActor {
    GENERATED_BODY()
public:
    UEventAction_HideActor();

};

