#include "SpiritAutoComponent.h"

USpiritAutoComponent::USpiritAutoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpiritOwner = NULL;
    this->FollowTargetComponent = NULL;
    this->LocomotionComponent = NULL;
    this->AnimatorComponent = NULL;
    this->CommandComponent = NULL;
    this->AutoCommandSet = NULL;
}

void USpiritAutoComponent::OnSummonerFacingChange() {
}

void USpiritAutoComponent::OnSummonerDodge() {
}

void USpiritAutoComponent::OnCommandQueueCleared() {
}


