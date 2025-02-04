#include "CustomMarkerComponent.h"

UCustomMarkerComponent::UCustomMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomMarkerMaxCount = 15;
}

int32 UCustomMarkerComponent::GetCustomMarkerMaxCount() const {
    return 0;
}


