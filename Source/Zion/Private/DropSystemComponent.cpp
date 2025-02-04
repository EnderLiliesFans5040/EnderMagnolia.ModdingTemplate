#include "DropSystemComponent.h"

UDropSystemComponent::UDropSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HistoryTime = 90.00f;
}

void UDropSystemComponent::LaunchExperienceDrop(int32 Experience, const FTransform& Origin) {
}

UDropSystemComponent* UDropSystemComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}


