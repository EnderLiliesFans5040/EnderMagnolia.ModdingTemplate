#pragma once
#include "CoreMinimal.h"
#include "FadeParameters.h"
#include "UserWidgetZion.h"
#include "UserWidgetFade.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class UUserWidgetFade : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UUserWidgetFade();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupFadeIn(const FFadeParameters& FadeParameters);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyFadeOutFinished();
    
    UFUNCTION(BlueprintCallable)
    void NotifyFadeInFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchFadeOut(const FFadeParameters& FadeParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LaunchFadeIn(const FFadeParameters& FadeParameters);
    
};

