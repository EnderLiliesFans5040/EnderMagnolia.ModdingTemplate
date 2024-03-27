#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "EEffectActionType.h"
#include "EEffectAttackType.h"
#include "AbilityEffectInstant_SpawnSECategory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_SpawnSECategory : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEffectAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEffectActionType Action;
    
public:
    UAbilityEffectInstant_SpawnSECategory();

};

