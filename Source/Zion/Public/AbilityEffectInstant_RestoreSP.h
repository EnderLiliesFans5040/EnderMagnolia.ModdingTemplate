#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "EFaction.h"
#include "AbilityEffectInstant_RestoreSP.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_RestoreSP : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsoluteValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EFaction> ValidTargetFactions;
    
public:
    UAbilityEffectInstant_RestoreSP();

};

