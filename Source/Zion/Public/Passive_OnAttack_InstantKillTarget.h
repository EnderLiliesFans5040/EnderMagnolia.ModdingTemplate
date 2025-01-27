#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Passive_OnAttack.h"
#include "Passive_OnAttack_InstantKillTarget.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnAttack_InstantKillTarget : public UPassive_OnAttack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve TriggerChanceCurve;
    
public:
    UPassive_OnAttack_InstantKillTarget();

};

