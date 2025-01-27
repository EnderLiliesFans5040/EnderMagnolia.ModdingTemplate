#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StatsLevelData.h"
#include "EnemyStatsLevelData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyStatsLevelData : public FStatsLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Drop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceDrop;
    
    ZION_API FEnemyStatsLevelData();
};

