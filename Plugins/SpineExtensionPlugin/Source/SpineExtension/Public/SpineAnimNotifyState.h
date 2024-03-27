#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SpineAnimNotifyState.generated.h"

class USpineSkeletonAnimationComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class SPINEEXTENSION_API USpineAnimNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    USpineAnimNotifyState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_SpineNotifyTick(USpineSkeletonAnimationComponent* SpineAnimationComponent, float DeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_SpineNotifyEnd(USpineSkeletonAnimationComponent* SpineAnimationComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_SpineNotifyBegin(USpineSkeletonAnimationComponent* SpineAnimationComponent, float TotalDuration) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecuting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionRatio() const;
    
};

