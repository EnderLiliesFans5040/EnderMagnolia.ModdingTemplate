#pragma once
#include "CoreMinimal.h"
#include "Passive_AutoRegenerate.h"
#include "Passive_AutoRegenerateHP.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_AutoRegenerateHP : public UPassive_AutoRegenerate {
    GENERATED_BODY()
public:
    UPassive_AutoRegenerateHP();

};

