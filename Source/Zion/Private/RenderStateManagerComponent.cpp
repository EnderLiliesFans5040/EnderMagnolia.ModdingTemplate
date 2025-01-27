#include "RenderStateManagerComponent.h"

URenderStateManagerComponent::URenderStateManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URenderStateManagerComponent::OnGameMapChangeStarted() {
}

void URenderStateManagerComponent::OnGameMapChangeFinished() {
}

URenderStateManagerComponent* URenderStateManagerComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}


