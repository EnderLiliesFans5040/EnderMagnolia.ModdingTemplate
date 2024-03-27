#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_ResetClearedObjects.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_ResetClearedObjects : public UEventAction {
    GENERATED_BODY()
public:
    UEventAction_ResetClearedObjects();

};

