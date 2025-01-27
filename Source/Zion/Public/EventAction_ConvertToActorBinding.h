#pragma once
#include "CoreMinimal.h"
#include "EventAction_Convert.h"
#include "EventAction_ConvertToActorBinding.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_ConvertToActorBinding : public UEventAction_Convert {
    GENERATED_BODY()
public:
    UEventAction_ConvertToActorBinding();

};

