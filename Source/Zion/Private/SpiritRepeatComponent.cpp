#include "SpiritRepeatComponent.h"

USpiritRepeatComponent::USpiritRepeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpiritOwner = NULL;
    this->FollowTargetComponent = NULL;
    this->LocomotionComponent = NULL;
    this->AnimatorComponent = NULL;
    this->AbilityComponent = NULL;
    this->ManualAbility = NULL;
}

void USpiritRepeatComponent::OnSummonerFacingChange() {
}


