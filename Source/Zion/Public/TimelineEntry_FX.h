#pragma once
#include "CoreMinimal.h"
#include "SpineFXData.h"
#include "TimelineEntry.h"
#include "TimelineEntry_FX.generated.h"

USTRUCT(BlueprintType)
struct FTimelineEntry_FX : public FTimelineEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FXData;
    
public:
    ZION_API FTimelineEntry_FX();
};

