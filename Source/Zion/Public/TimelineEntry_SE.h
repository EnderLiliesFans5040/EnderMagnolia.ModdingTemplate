#pragma once
#include "CoreMinimal.h"
#include "SoundData.h"
#include "TimelineEntry.h"
#include "TimelineEntry_SE.generated.h"

USTRUCT(BlueprintType)
struct FTimelineEntry_SE : public FTimelineEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData SoundData;
    
public:
    ZION_API FTimelineEntry_SE();
};

