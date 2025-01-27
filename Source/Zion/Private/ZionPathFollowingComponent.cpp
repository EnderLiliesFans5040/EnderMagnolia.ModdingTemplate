#include "ZionPathFollowingComponent.h"

UZionPathFollowingComponent::UZionPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PathFollowingMode = EPathFollowingMode::Default;
    this->bOverridePathAcceptanceRadius = false;
    this->PathPointAcceptanceRadius = 0.00f;
}


