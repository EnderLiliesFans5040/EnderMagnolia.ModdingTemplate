#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SpineAnimationDefinition.h"
#include "BTTask_PlaySpineAnimations.generated.h"

UCLASS(Blueprintable)
class UBTTask_PlaySpineAnimations : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> Animations;
    
public:
    UBTTask_PlaySpineAnimations();

};

