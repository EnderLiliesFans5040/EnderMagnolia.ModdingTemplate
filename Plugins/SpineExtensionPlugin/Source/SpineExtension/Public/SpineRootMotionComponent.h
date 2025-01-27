#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpineRootMotionComponent.generated.h"

class USpineSkeletonComponent;
class UTrackEntry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSION_API USpineRootMotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USpineRootMotionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAnyAnimationStart(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyAnimationInterrupt(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyAnimationDispose(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyAnimationComplete(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAfterUpdateWorldTransform(USpineSkeletonComponent* Skeleton);
    
};

