#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "ESetFacingMode.h"
#include "AbilityEffectInstant_SetFacing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_SetFacing : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESetFacingMode SetFacingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertFacing;
    
public:
    UAbilityEffectInstant_SetFacing();

};

