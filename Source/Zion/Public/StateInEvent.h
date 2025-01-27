#pragma once
#include "CoreMinimal.h"
#include "StateBusy.h"
#include "StateInEvent.generated.h"

UCLASS(Blueprintable)
class UStateInEvent : public UStateBusy {
    GENERATED_BODY()
public:
    UStateInEvent();

};

