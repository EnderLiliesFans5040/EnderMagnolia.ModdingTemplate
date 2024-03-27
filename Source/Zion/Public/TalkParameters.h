#pragma once
#include "CoreMinimal.h"
#include "ETalkDesign.h"
#include "TalkParameters.generated.h"

USTRUCT(BlueprintType)
struct FTalkParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SpeakerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETalkDesign Design;
    
    ZION_API FTalkParameters();
};

