#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TimelineEntry.h"
#include "TimelineStateEntry.generated.h"

class UState;

USTRUCT(BlueprintType)
struct FTimelineStateEntry : public FTimelineEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UState> State;
    
public:
    ZION_API FTimelineStateEntry();
};

