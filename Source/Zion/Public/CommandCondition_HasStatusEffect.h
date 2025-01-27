#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "EConditionOperator.h"
#include "EStatusEffectType.h"
#include "CommandCondition_HasStatusEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandCondition_HasStatusEffect : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionOperator CheckOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EStatusEffectType> StatusEffects;
    
public:
    UCommandCondition_HasStatusEffect();

};

