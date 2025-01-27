#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "CommandCondition_HasRemainingHeals.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_HasRemainingHeals : public UCommandCondition {
    GENERATED_BODY()
public:
    UCommandCondition_HasRemainingHeals();

};

