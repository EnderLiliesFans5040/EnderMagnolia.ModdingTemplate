#pragma once
#include "CoreMinimal.h"
#include "AbilityEffect.h"
#include "AbilityEffectInstant.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAbilityEffectInstant : public UAbilityEffect {
    GENERATED_BODY()
public:
    UAbilityEffectInstant();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyEffect();
    
};

