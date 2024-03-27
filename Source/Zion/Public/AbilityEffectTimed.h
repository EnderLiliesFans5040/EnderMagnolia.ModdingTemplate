#pragma once
#include "CoreMinimal.h"
#include "AbilityEffect.h"
#include "AbilityEffectTimed.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAbilityEffectTimed : public UAbilityEffect {
    GENERATED_BODY()
public:
    UAbilityEffectTimed();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnUpdate(float DeltaTime, float& out_ConsumedDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStart();
    
};

