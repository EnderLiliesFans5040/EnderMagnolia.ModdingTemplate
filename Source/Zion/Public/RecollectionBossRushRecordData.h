#pragma once
#include "CoreMinimal.h"
#include "RecollectionBossRushRecordData.generated.h"

USTRUCT(BlueprintType)
struct FRecollectionBossRushRecordData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    ZION_API FRecollectionBossRushRecordData();
};

