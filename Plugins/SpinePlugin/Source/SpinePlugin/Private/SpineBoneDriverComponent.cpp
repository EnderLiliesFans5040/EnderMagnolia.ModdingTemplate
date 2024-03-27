#include "SpineBoneDriverComponent.h"

USpineBoneDriverComponent::USpineBoneDriverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->UseComponentTransform = true;
    this->UsePosition = true;
    this->UseRotation = true;
    this->UseScale = true;
    this->bDriverEnabled = true;
}

void USpineBoneDriverComponent::SetDriverEnable(bool bNewDriverEnable) {
}

bool USpineBoneDriverComponent::IsDriverEnabled() const {
    return false;
}

void USpineBoneDriverComponent::BeforeUpdateWorldTransform(USpineSkeletonComponent* Skeleton) {
}


