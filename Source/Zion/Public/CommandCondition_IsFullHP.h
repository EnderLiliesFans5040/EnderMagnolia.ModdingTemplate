#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "CommandCondition_IsFullHP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_IsFullHP : public UCommandCondition {
    GENERATED_BODY()
public:
    UCommandCondition_IsFullHP();

};

