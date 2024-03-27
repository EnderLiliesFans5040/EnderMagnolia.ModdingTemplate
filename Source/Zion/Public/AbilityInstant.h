#pragma once
#include "CoreMinimal.h"
#include "Ability.h"
#include "AbilityInstant.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class AAbilityInstant : public AAbility {
    GENERATED_BODY()
public:
    AAbilityInstant(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTargets(const TArray<AActor*>& InTargets);
    
};

