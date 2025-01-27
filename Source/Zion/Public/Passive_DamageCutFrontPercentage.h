#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_DamageCutFrontPercentage.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_DamageCutFrontPercentage : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_DamageCutFrontPercentage();

};

