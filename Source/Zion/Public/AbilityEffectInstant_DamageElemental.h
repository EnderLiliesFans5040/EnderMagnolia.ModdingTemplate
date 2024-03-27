#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "AbilityEffectInstant_DamageElemental.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAbilityEffectInstant_DamageElemental : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsoluteDamage;
    
public:
    UAbilityEffectInstant_DamageElemental();

};

