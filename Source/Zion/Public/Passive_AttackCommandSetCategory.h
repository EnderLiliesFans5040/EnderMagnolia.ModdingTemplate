#pragma once
#include "CoreMinimal.h"
#include "ECommandSetCategory.h"
#include "Passive.h"
#include "Passive_AttackCommandSetCategory.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_AttackCommandSetCategory : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandSetCategory CommandSetCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PercentageBonus;
    
public:
    UPassive_AttackCommandSetCategory();

};

