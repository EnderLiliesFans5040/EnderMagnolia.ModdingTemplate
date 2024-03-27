#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_WaitAnimation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_WaitAnimation : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
    UEventAction_WaitAnimation();

};

