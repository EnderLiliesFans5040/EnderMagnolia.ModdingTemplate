#include "DropSystemComponent.h"

UDropSystemComponent::UDropSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDropSystemComponent::LaunchExperienceDrop(int32 Experience, const FTransform& Origin) {
}

void UDropSystemComponent::LaunchDropFromHandle(const FDataTableRowHandle& DropHandle, const FTransform& Origin) {
}

UDropSystemComponent* UDropSystemComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}


