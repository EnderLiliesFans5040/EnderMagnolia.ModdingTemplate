#pragma once
#include "CoreMinimal.h"
#include "TimelineBase.h"
#include "TimelineEntry_SE.h"
#include "TimelineSE.generated.h"

USTRUCT(BlueprintType)
struct FTimelineSE : public FTimelineBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimelineEntry_SE> Entries;
    
public:
    ZION_API FTimelineSE();
};

