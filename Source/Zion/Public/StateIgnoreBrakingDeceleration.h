#pragma once
#include "CoreMinimal.h"
#include "State.h"
#include "StateIgnoreBrakingDeceleration.generated.h"

UCLASS(Blueprintable)
class UStateIgnoreBrakingDeceleration : public UState {
    GENERATED_BODY()
public:
    UStateIgnoreBrakingDeceleration();

};

