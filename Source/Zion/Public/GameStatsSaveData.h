#pragma once
#include "CoreMinimal.h"
#include "GameStatsSaveData.generated.h"

USTRUCT(BlueprintType)
struct FGameStatsSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PlayTimeDecimal;
    
    ZION_API FGameStatsSaveData();
};

