#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_FallingGravityFactor_Reduce.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_FallingGravityFactor_Reduce : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FallingGravityReductionPercentage;
    
public:
    UPassive_FallingGravityFactor_Reduce();

};

