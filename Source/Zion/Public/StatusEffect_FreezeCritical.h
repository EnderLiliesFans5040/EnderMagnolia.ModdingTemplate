#pragma once
#include "CoreMinimal.h"
#include "StatusEffect_Freeze.h"
#include "StatusEffect_FreezeCritical.generated.h"

UCLASS(Abstract, Blueprintable)
class UStatusEffect_FreezeCritical : public UStatusEffect_Freeze {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationTimeThreshold;
    
public:
    UStatusEffect_FreezeCritical();

};

