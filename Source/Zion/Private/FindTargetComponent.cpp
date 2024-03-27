#include "FindTargetComponent.h"

UFindTargetComponent::UFindTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionType = EAITargetDetectionType::ClosestTarget;
    this->MinDistance = 0.00f;
    this->MaxDistance = 1000.00f;
    this->bCheckFront = true;
    this->bCheckLineOfSight = true;
    this->VisibilityCollisionChannel = ECC_Visibility;
}


