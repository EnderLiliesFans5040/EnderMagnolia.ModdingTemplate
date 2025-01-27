#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_SwimFaster.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_SwimFaster : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FactorBonus;
    
public:
    UPassive_SwimFaster();

};

