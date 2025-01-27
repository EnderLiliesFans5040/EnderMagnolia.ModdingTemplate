#pragma once
#include "CoreMinimal.h"
#include "EventCondition.h"
#include "EventCondition_IsDemoBuild.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventCondition_IsDemoBuild : public UEventCondition {
    GENERATED_BODY()
public:
    UEventCondition_IsDemoBuild();

};

