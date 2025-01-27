#include "TimeManagerComponent.h"

UTimeManagerComponent::UTimeManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UTimeManagerComponent::RemoveDilation(const FName& Tag) {
}

void UTimeManagerComponent::RemoveAllTimeDilation() {
}

bool UTimeManagerComponent::IsTimeDilationActive(const FName& Tag) const {
    return false;
}

UTimeManagerComponent* UTimeManagerComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UTimeManagerComponent::AddDilation(float TimeDilationOverride, const FName& Tag) {
}


