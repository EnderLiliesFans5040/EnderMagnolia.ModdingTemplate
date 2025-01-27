#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloomBoxRuntimeSettings.generated.h"

USTRUCT(BlueprintType)
struct FBloomBoxRuntimeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BloomColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWriteBloomTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWriteWidgetTexture;
    
    BLOOMBOX_API FBloomBoxRuntimeSettings();
};

