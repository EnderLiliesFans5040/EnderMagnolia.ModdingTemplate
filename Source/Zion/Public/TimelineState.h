#pragma once
#include "CoreMinimal.h"
#include "TimelineBase.h"
#include "TimelineStateEntry.h"
#include "TimelineState.generated.h"

USTRUCT(BlueprintType)
struct FTimelineState : public FTimelineBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimelineStateEntry> Entries;
    
public:
    ZION_API FTimelineState();
};

