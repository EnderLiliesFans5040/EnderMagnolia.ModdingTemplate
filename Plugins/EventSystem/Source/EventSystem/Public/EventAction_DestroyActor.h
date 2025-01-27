#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_DestroyActor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_DestroyActor : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
    UEventAction_DestroyActor();

};

