#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_FallingGravityFactor_Increase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_FallingGravityFactor_Increase : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FallingGravityIncreasePercentage;
    
public:
    UPassive_FallingGravityFactor_Increase();

};

