#pragma once
#include "CoreMinimal.h"
#include "StateBusy.h"
#include "StateDead.generated.h"

UCLASS(Blueprintable)
class UStateDead : public UStateBusy {
    GENERATED_BODY()
public:
    UStateDead();

};

