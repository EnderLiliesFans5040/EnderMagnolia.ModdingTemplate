#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_OnAttack.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnAttack : public UPassive {
    GENERATED_BODY()
public:
    UPassive_OnAttack();

};

