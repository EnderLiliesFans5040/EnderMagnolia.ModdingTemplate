#pragma once
#include "CoreMinimal.h"
#include "AbilityData.h"
#include "StatusEffect.h"
#include "StatusEffect_Burn.generated.h"

UCLASS(Abstract, Blueprintable)
class UStatusEffect_Burn : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData AbilityData;
    
public:
    UStatusEffect_Burn();

};

