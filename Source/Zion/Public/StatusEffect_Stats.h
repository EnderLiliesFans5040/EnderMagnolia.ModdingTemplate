#pragma once
#include "CoreMinimal.h"
#include "StatsLevelData.h"
#include "StatusEffect.h"
#include "StatusEffect_Stats.generated.h"

UCLASS(Abstract, Blueprintable)
class UStatusEffect_Stats : public UStatusEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatsLevelData BonusStatsPercentage;
    
public:
    UStatusEffect_Stats();

};

