#include "ZoneSystemComponent.h"

UZoneSystemComponent::UZoneSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveZoneLevelStreaming = NULL;
}

void UZoneSystemComponent::OnFadeOutFinished() {
}

bool UZoneSystemComponent::IsInAnyZone() const {
    return false;
}

FString UZoneSystemComponent::GetActiveZoneName() const {
    return TEXT("");
}

FString UZoneSystemComponent::GetActiveZoneLevelName() const {
    return TEXT("");
}

UZoneSystemComponent* UZoneSystemComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UZoneSystemComponent::BindActorToZone(AActor* Actor) {
}


