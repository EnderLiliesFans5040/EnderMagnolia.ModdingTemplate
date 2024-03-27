#include "FluidSimulationComponent.h"

UFluidSimulationComponent::UFluidSimulationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplatMaterial = NULL;
    this->HeightSimulationMaterial = NULL;
    this->bComputeNormal = false;
    this->ComputeNormalMaterial = NULL;
    this->SplatMID = NULL;
    this->HeightSimulationMID = NULL;
    this->ComputeNormalMID = NULL;
    this->NormalRT = NULL;
}

void UFluidSimulationComponent::GenerateSplash(const FVector& WorldLocation, float Strength, float SizePercent) {
}


