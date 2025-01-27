#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_ClearEventIdleOverride.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_ClearEventIdleOverride : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
    UEventAction_ClearEventIdleOverride();

};

