#pragma once
#include "CoreMinimal.h"
#include "PlaySoundTriggerData.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct FPlaySoundTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDelay;
    
    ZION_API FPlaySoundTriggerData();
};

