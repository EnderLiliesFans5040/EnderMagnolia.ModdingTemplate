#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "EBreakType.h"
#include "AbilityEffectInstant_BreakPart.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_BreakPart : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBreakType BreakType;
    
public:
    UAbilityEffectInstant_BreakPart();

};

