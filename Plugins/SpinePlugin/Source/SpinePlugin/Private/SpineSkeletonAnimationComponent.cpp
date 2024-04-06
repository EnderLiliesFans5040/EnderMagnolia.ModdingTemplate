#include "SpineSkeletonAnimationComponent.h"

USpineSkeletonAnimationComponent::USpineSkeletonAnimationComponent(/*const FObjectInitializer& ObjectInitializer*/) : Super(/*ObjectInitializer*/) {
    this->bAutoPlaying = true;
}

void USpineSkeletonAnimationComponent::SetTimeScale(float TimeScale) {
}

void USpineSkeletonAnimationComponent::SetPlaybackTime(float InPlaybackTime, bool bCallDelegates) {
}

UTrackEntry* USpineSkeletonAnimationComponent::SetEmptyAnimation(int32 TrackIndex, float mixDuration) {
    return NULL;
}

void USpineSkeletonAnimationComponent::SetAutoPlay(bool bInAutoPlays) {
}

UTrackEntry* USpineSkeletonAnimationComponent::SetAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop) {
    return NULL;
}

void USpineSkeletonAnimationComponent::RemoveTimeScaleFactor(FName Tag) {
}

float USpineSkeletonAnimationComponent::GetTimeScale() {
    return 0.0f;
}

UTrackEntry* USpineSkeletonAnimationComponent::GetCurrent(int32 TrackIndex) {
    return NULL;
}

void USpineSkeletonAnimationComponent::ClearTracks() {
}

void USpineSkeletonAnimationComponent::ClearTrack(int32 TrackIndex) {
}

void USpineSkeletonAnimationComponent::AddTimeScaleFactor(float TimeScale, FName Tag) {
}

UTrackEntry* USpineSkeletonAnimationComponent::AddEmptyAnimation(int32 TrackIndex, float mixDuration, float Delay) {
    return NULL;
}

UTrackEntry* USpineSkeletonAnimationComponent::AddAnimation(int32 TrackIndex, const FString& AnimationName, bool Loop, float Delay) {
    return NULL;
}


