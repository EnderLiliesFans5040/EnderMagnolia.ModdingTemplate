#pragma once
#include "CoreMinimal.h"
#include "StatsLevelData.h"
#include "PlayerStatsLevelData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStatsLevelData : public FStatsLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpForLevelUp;
    
    ZION_API FPlayerStatsLevelData();
};

