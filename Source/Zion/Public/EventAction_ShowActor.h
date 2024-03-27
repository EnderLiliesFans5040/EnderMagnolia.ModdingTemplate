#pragma once
#include "CoreMinimal.h"
#include "EventAction_ShowHideActor.h"
#include "EventAction_ShowActor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_ShowActor : public UEventAction_ShowHideActor {
    GENERATED_BODY()
public:
    UEventAction_ShowActor();

};

