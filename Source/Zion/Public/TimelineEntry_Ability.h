#pragma once
#include "CoreMinimal.h"
#include "AbilityData.h"
#include "TimelineEntry.h"
#include "TimelineEntry_Ability.generated.h"

class AAbility;

USTRUCT(BlueprintType)
struct FTimelineEntry_Ability : public FTimelineEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityData AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAbility* AbilityInstance;
    
public:
    ZION_API FTimelineEntry_Ability();
};

