#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectInstant.h"
#include "ShakeData.h"
#include "AbilityEffectInstant_ShakeTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectInstant_ShakeTarget : public UAbilityEffectInstant {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShakeData GroundShakeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShakeData AirShakeData;
    
public:
    UAbilityEffectInstant_ShakeTarget();

};

