#include "RenderStateComponent.h"

URenderStateComponent::URenderStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bVisible = true;
    this->bRequireRecentlyRendered = true;
    this->bAutoMarkAsSeenOnZoneComplete = false;
    this->bOverrideBounds = false;
    this->bGetOnlyCollidingComponentsBounds = true;
    this->bOverrideCameraBounds = false;
    this->bCheckDistanceToPlayerLocation = false;
}

bool URenderStateComponent::SetVisible(bool bIsVisible) {
    return false;
}

void URenderStateComponent::SetNewBounds(const AActor* Actor) {
}

bool URenderStateComponent::IsVisible() const {
    return false;
}


