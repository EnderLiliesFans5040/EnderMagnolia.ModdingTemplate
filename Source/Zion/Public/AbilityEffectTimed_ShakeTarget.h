#pragma once
#include "CoreMinimal.h"
#include "AbilityEffectTimed.h"
#include "ShakeData.h"
#include "AbilityEffectTimed_ShakeTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAbilityEffectTimed_ShakeTarget : public UAbilityEffectTimed {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShakeData GroundShakeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShakeData AirShakeData;
    
public:
    UAbilityEffectTimed_ShakeTarget();

};

