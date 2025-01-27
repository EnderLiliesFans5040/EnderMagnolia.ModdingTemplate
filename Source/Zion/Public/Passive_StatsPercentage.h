#pragma once
#include "CoreMinimal.h"
#include "Passive.h"
#include "StatsLevelData.h"
#include "Passive_StatsPercentage.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_StatsPercentage : public UPassive {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsLevelData PercentageBonus;
    
public:
    UPassive_StatsPercentage();

};

