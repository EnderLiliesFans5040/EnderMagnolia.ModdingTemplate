#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "StatusEffect_DamageCut.generated.h"

UCLASS(Abstract, Blueprintable)
class UStatusEffect_DamageCut : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UStatusEffect_DamageCut();

};

