#pragma once
#include "CoreMinimal.h"
#include "AbilityHitbox.h"
#include "AbilityHitboxTarget.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class AAbilityHitboxTarget : public AAbilityHitbox {
    GENERATED_BODY()
public:
    AAbilityHitboxTarget(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetTarget() const;
    
};

