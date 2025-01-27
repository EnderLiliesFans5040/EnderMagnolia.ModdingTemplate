#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EFadeLayer.h"
#include "EFadeState.h"
#include "FadeDelegateDelegate.h"
#include "FadeDescriptionData.h"
#include "FadeRuntimeData.h"
#include "FadeSubsystem.generated.h"

UCLASS(Blueprintable)
class UFadeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EFadeLayer, FFadeRuntimeData> Fades;
    
public:
    UFadeSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetupFadeIn(const FFadeDescriptionData& FadeDescription, EFadeLayer FadeLayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFadeWidgetDestruct();
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchFadeOut(const FFadeDescriptionData& FadeDescription, const FFadeDelegate& OnFadeFinishedDelegate, EFadeLayer FadeLayer);
    
    UFUNCTION(BlueprintCallable)
    void LaunchFadeIn(const FFadeDescriptionData& FadeDescription, const FFadeDelegate& OnFadeFinishedDelegate, EFadeLayer FadeLayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFading(EFadeLayer FadeLayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeVisible(EFadeLayer FadeLayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyFadeVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFadeState GetFadeState(EFadeLayer FadeLayer) const;
    
};

