#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_RunFaster.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_RunFaster : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FactorBonus;
    
public:
    UPassive_RunFaster();

};

