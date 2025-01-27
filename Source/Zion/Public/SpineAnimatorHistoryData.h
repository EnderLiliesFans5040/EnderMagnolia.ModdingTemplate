#pragma once
#include "CoreMinimal.h"
#include "SpineAnimatorHistoryData.generated.h"

USTRUCT(BlueprintType)
struct FSpineAnimatorHistoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayedDuration;
    
    ZION_API FSpineAnimatorHistoryData();
};

