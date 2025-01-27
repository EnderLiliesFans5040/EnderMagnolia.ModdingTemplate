#include "SpineMeshComponent.h"

USpineMeshComponent::USpineMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshUVDensity = 1.00f;
}

void USpineMeshComponent::SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility) {
}

bool USpineMeshComponent::IsMeshSectionVisible(int32 SectionIndex) const {
    return false;
}

int32 USpineMeshComponent::GetNumSections() const {
    return 0;
}

void USpineMeshComponent::ClearMeshSection(int32 SectionIndex, bool bUpdateBounds) {
}

void USpineMeshComponent::ClearAllMeshSections() {
}


