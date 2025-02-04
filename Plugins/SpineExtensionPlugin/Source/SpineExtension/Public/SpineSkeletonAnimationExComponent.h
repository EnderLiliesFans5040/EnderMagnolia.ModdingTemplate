#pragma once
#include "CoreMinimal.h"
#include "SpineSkeletonAnimationComponent.h"
#include "SpineSkeletonAnimationExComponent.generated.h"

class USpineAnimInstance;
class USpineAtlasAsset;
class USpineNotifyAsset;
class USpineSkeletonDataAsset;
class UTrackEntry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPINEEXTENSION_API USpineSkeletonAnimationExComponent : public USpineSkeletonAnimationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpineNotifyAsset* NotifyData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USpineAnimInstance*> LastAnimInstances;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, USpineAnimInstance*> AnimInstanceForAnimations;
    
public:
    USpineSkeletonAnimationExComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlaybackTimeIgnoreTimescale(float InPlaybackTime, bool bCallDelegates);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceSpineData(USpineAtlasAsset* NewAtlas, USpineSkeletonDataAsset* NewSkeletonData, USpineNotifyAsset* NewNotifyAsset);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationStart(UTrackEntry* Entry);
    
};

