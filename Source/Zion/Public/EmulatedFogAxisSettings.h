#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEmulatedFogBlendType.h"
#include "EmulatedFogAxisSettings.generated.h"

USTRUCT(BlueprintType)
struct FEmulatedFogAxisSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EEmulatedFogBlendType BlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MaxColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GradientRow;
    
    ZION_API FEmulatedFogAxisSettings();
};

