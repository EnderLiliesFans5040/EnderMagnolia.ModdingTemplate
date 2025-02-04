#pragma once
#include "CoreMinimal.h"
#include "RecollectionBossRushRecordData.h"
#include "RecollectionBossRushRecordsData.generated.h"

USTRUCT(BlueprintType)
struct FRecollectionBossRushRecordsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBossesDefeatedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecollectionBossRushRecordData> Records;
    
    ZION_API FRecollectionBossRushRecordsData();
};

