#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_OnKill.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnKill : public UPassive {
    GENERATED_BODY()
public:
    UPassive_OnKill();

};

