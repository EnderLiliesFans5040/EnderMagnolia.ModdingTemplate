#include "SpineAnimationTransitionCondition.h"

USpineAnimationTransitionCondition::USpineAnimationTransitionCondition() {
}

bool USpineAnimationTransitionCondition::Evaluate_Implementation(const USpineAnimatorComponent* Animator, const FString& CurrAnimationName, const FString& NextAnimationName) const {
    return false;
}


