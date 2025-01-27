#include "RopeComponent.h"

URopeComponent::URopeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseRope = true;
    this->RopeDepthScale = 0.01f;
    this->RopeWidthScale = 0.10f;
    this->RopeMinLength = 0.00f;
    this->RopeDestinationPoint = NULL;
    this->RopeAttachPoint = NULL;
}


