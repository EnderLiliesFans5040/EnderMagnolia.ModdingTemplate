#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BTTask_SpineColor.h"
#include "BTTask_SpineColor_Set.generated.h"

UCLASS(Blueprintable)
class UBTTask_SpineColor_Set : public UBTTask_SpineColor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OverrideColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideAlpha;
    
public:
    UBTTask_SpineColor_Set();

};

