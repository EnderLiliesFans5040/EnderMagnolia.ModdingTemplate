#include "FluidMeshComponent.h"

UFluidMeshComponent::UFluidMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->Material = NULL;
    this->MeshType = EFluidMeshType::XYZ;
    this->bUseMeshSubdivision = true;
    this->CellSizeX = 25;
    this->CellSizeY = 25;
}

void UFluidMeshComponent::RegenerateMesh() {
}


