#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SpineAnimNotify.generated.h"

class USpineSkeletonAnimationComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class SPINEEXTENSION_API USpineAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    USpineAnimNotify();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Received_SpineNotify(USpineSkeletonAnimationComponent* SpineAnimationComponent) const;
    
};

