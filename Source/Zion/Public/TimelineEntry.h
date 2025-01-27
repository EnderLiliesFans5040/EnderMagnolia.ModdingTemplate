#pragma once
#include "CoreMinimal.h"
#include "ETimelineEntryActiveType.h"
#include "TimelineEntry.generated.h"

USTRUCT(BlueprintType)
struct FTimelineEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimelineEntryActiveType ActiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
public:
    ZION_API FTimelineEntry();
};

