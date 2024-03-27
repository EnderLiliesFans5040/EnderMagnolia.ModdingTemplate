#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_StopAnimation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_StopAnimation : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
    UEventAction_StopAnimation();

};

