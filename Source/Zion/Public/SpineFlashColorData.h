#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpineFlashColorData.generated.h"

USTRUCT(BlueprintType)
struct FSpineFlashColorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    ZION_API FSpineFlashColorData();
};

