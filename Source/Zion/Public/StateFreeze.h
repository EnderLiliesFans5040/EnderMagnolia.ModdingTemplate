#pragma once
#include "CoreMinimal.h"
#include "StateBusy.h"
#include "StateFreeze.generated.h"

UCLASS(Blueprintable)
class UStateFreeze : public UStateBusy {
    GENERATED_BODY()
public:
    UStateFreeze();

};

