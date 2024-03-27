#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SpineAnimationTransitionCondition.generated.h"

class USpineAnimatorComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpineAnimationTransitionCondition : public UObject {
    GENERATED_BODY()
public:
    USpineAnimationTransitionCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Evaluate(const USpineAnimatorComponent* Animator, const FString& CurrAnimationName, const FString& NextAnimationName) const;
    
};

