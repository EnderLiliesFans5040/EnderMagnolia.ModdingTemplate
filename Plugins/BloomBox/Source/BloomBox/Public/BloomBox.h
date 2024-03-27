#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Components/ContentWidget.h"
#include "BloomBoxGenerationSettings.h"
#include "BloomBoxResources.h"
#include "BloomBoxRuntimeSettings.h"
#include "EBloomBoxGenerationTiming.h"
#include "BloomBox.generated.h"

UCLASS(Blueprintable)
class BLOOMBOX_API UBloomBox : public UContentWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBloomBoxGenerationTiming GenerationTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BloomColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RuntimeEffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBloomBoxRuntimeSettings RuntimeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBloomBoxGenerationSettings GenerationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBloomBoxResources BloomBoxResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> ContentHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> ContentVerticalAlignment;
    
public:
    UBloomBox();

    UFUNCTION(BlueprintCallable)
    void SetRuntimeEffectValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomColor(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void RequestRender();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRuntimeEffectValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetBloomColor() const;
    
};

