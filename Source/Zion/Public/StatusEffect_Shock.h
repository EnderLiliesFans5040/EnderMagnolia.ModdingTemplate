#pragma once
#include "CoreMinimal.h"
#include "StatusEffect_Stats.h"
#include "StatusEffect_Shock.generated.h"

UCLASS(Abstract, Blueprintable)
class UStatusEffect_Shock : public UStatusEffect_Stats {
    GENERATED_BODY()
public:
    UStatusEffect_Shock();

};

