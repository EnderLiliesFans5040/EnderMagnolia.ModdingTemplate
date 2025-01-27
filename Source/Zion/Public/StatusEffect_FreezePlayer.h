#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "StatusEffect_FreezePlayer.generated.h"

UCLASS(Abstract, Blueprintable)
class UStatusEffect_FreezePlayer : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeedRatio;
    
public:
    UStatusEffect_FreezePlayer();

};

