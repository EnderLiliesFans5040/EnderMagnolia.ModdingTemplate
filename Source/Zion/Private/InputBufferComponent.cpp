#include "InputBufferComponent.h"

UInputBufferComponent::UInputBufferComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxBufferTime = 0.50f;
}

int32 UInputBufferComponent::GetInputSnapshotCount() const {
    return 0;
}

FTimedInputSnapshot UInputBufferComponent::GetInputSnapshotAtIndex(int32 Index) const {
    return FTimedInputSnapshot{};
}


