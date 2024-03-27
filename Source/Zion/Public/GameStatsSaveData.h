#pragma once
#include "CoreMinimal.h"
#include "GameStatsSaveData.generated.h"

USTRUCT(BlueprintType)
struct FGameStatsSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayTime;
    
    ZION_API FGameStatsSaveData();
};

