#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FadeParameters.generated.h"

USTRUCT(BlueprintType)
struct FFadeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    ZION_API FFadeParameters();
};

