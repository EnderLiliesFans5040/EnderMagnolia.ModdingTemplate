#pragma once
#include "CoreMinimal.h"
#include "SpineFXData.h"
#include "AbilityEffectInstant.h"
#include "AbilityEffectInstant_SpawnFX.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_SpawnFX : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData GuardFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientFromAttacker;
    
public:
    UAbilityEffectInstant_SpawnFX();

};

