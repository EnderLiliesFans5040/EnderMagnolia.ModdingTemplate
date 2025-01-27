#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "Passive.h"
#include "Passive_CurrencyPercentage.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_CurrencyPercentage : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurrencyType CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_CurrencyPercentage();

};

