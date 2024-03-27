#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "AbilityEffectInstant_DamageStamina.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_DamageStamina : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsoluteDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInjectFacingOnStun;
    
public:
    UAbilityEffectInstant_DamageStamina();

};

