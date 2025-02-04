#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TrackEntry.generated.h"

UCLASS(Blueprintable)
class SPINEPLUGIN_API UTrackEntry : public UObject {
    GENERATED_BODY()
public:
    UTrackEntry();

    UFUNCTION(BlueprintCallable)
    void SetTrackTime(float trackTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackEnd(float trackEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionID(int32 RootMotionID);
    
    UFUNCTION(BlueprintCallable)
    void SetMixTime(float mixTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMixDuration(float mixDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool Loop);
    
    UFUNCTION(BlueprintCallable)
    void SetEventThreshold(float eventThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawOrderThreshold(float drawOrderThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetDelay(float Delay);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentThreshold(float attachmentThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationStart(float animationStart);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationLast(float animationLast);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationEnd(float animationEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    bool isValidAnimation();
    
    UFUNCTION(BlueprintCallable)
    float GetTrackTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTrackIndex();
    
    UFUNCTION(BlueprintCallable)
    float GetTrackEnd();
    
    UFUNCTION(BlueprintCallable)
    float GetTimeScale();
    
    UFUNCTION(BlueprintCallable)
    float GetMixTime();
    
    UFUNCTION(BlueprintCallable)
    float GetMixDuration();
    
    UFUNCTION(BlueprintCallable)
    bool GetLoop();
    
    UFUNCTION(BlueprintCallable)
    float GetEventThreshold();
    
    UFUNCTION(BlueprintCallable)
    float GetDrawOrderThreshold();
    
    UFUNCTION(BlueprintCallable)
    float GetDelay();
    
    UFUNCTION(BlueprintCallable)
    float GetAttachmentThreshold();
    
    UFUNCTION(BlueprintCallable)
    bool GetApplyRootMotion();
    
    UFUNCTION(BlueprintCallable)
    float getAnimationTime();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationStart();
    
    UFUNCTION(BlueprintCallable)
    float getAnimationOriginalDuration();
    
    UFUNCTION(BlueprintCallable)
    FString getAnimationName();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationLast();
    
    UFUNCTION(BlueprintCallable)
    float GetAnimationEnd();
    
    UFUNCTION(BlueprintCallable)
    float getAnimationDuration();
    
    UFUNCTION(BlueprintCallable)
    float GetAlpha();
    
};

