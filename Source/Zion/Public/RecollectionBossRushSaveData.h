#pragma once
#include "CoreMinimal.h"
#include "RecollectionBossRushRecordData.h"
#include "RecollectionBossRushSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRecollectionBossRushSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecollectionBossRushRecordData> Records;
    
    ZION_API FRecollectionBossRushSaveData();
};

