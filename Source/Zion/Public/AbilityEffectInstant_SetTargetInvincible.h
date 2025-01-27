#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "AbilityEffectInstant_SetTargetInvincible.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_SetTargetInvincible : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    UAbilityEffectInstant_SetTargetInvincible();

};

