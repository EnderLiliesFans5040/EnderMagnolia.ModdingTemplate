#pragma once
#include "CoreMinimal.h"
#include "AbilityHitboxTarget.h"
#include "AbilityHitboxTarget_AI.generated.h"

UCLASS(Abstract, Blueprintable)
class AAbilityHitboxTarget_AI : public AAbilityHitboxTarget {
    GENERATED_BODY()
public:
    AAbilityHitboxTarget_AI(const FObjectInitializer& ObjectInitializer);

};

