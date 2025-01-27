#pragma once
#include "CoreMinimal.h"
#include "AbilityVisualCue.h"
#include "TimelineBase.h"
#include "TimelineEntry_Ability.h"
#include "TimelineAbility.generated.h"

USTRUCT(BlueprintType)
struct FTimelineAbility : public FTimelineBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimelineEntry_Ability> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityVisualCue VisualCueData;
    
public:
    ZION_API FTimelineAbility();
};

