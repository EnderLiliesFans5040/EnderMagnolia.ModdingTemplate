#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "Passive_HealCount.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_HealCount : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealCountBonus;
    
public:
    UPassive_HealCount();

};

