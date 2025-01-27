#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_HigherMobility.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_HigherMobility : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunFactorBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimFactorBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyJumpHigher;
    
public:
    UPassive_HigherMobility();

};

