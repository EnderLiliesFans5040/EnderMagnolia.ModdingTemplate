#pragma once
#include "CoreMinimal.h"
#include "TimelineBase.h"
#include "TimelineEntry_Move.h"
#include "TimelineMove.generated.h"

USTRUCT(BlueprintType)
struct FTimelineMove : public FTimelineBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimelineEntry_Move> Entries;
    
public:
    ZION_API FTimelineMove();
};

