#pragma once
#include "CoreMinimal.h"
#include "SpineSkeletonComponent.h"
#include "SpineSkeletonAnimationComponent.generated.h"

class UTrackEntry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEPLUGIN_API USpineSkeletonAnimationComponent : public USpineSkeletonComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviewAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviewSkin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UTrackEntry*> trackEntries;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlaying;
    
public:
    USpineSkeletonAnimationComponent(/*const FObjectInitializer& ObjectInitializer*/);

    UFUNCTION(BlueprintCallable)
    void SetTimeScale(float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* SetEmptyAnimation(int32 TrackIndex, float mixDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlay(bool bInAutoPlays);
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* SetAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTimeScaleFactor(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    float GetTimeScale();
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* GetCurrent(int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearTracks();
    
    UFUNCTION(BlueprintCallable)
    void ClearTrack(int32 TrackIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddTimeScaleFactor(float TimeScale, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* AddEmptyAnimation(int32 TrackIndex, float mixDuration, float Delay);
    
    UFUNCTION(BlueprintCallable)
    UTrackEntry* AddAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop, float Delay);
    
};

