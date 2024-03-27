#pragma once
#include "CoreMinimal.h"
#include "TimelineBase.h"
#include "TimelineEntry_FX.h"
#include "TimelineFX.generated.h"

USTRUCT(BlueprintType)
struct FTimelineFX : public FTimelineBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimelineEntry_FX> Entries;
    
public:
    ZION_API FTimelineFX();
};

