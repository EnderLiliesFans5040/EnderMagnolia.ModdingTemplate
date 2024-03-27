#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_Camera_AttachToSubject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_Camera_AttachToSubject : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
    UEventAction_Camera_AttachToSubject();

};

