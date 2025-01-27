#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "ESpineAnimatorLayer.h"
#include "CommandCondition_IsPlayingAnimation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_IsPlayingAnimation : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpineAnimatorLayer AnimatorLayer;
    
public:
    UCommandCondition_IsPlayingAnimation();

};

