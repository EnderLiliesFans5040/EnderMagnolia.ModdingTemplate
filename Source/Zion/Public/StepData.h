#pragma once
#include "CoreMinimal.h"
#include "SpineFXData.h"
#include "SoundData.h"
#include "StepData.generated.h"

USTRUCT(BlueprintType)
struct FStepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData SoundData;
    
    ZION_API FStepData();
};

