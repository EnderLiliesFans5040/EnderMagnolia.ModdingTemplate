#pragma once
#include "CoreMinimal.h"
#include "StateBusy.h"
#include "StateFreezeCritical.generated.h"

UCLASS(Blueprintable)
class UStateFreezeCritical : public UStateBusy {
    GENERATED_BODY()
public:
    UStateFreezeCritical();

};

