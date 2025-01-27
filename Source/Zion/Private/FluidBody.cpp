#include "FluidBody.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "FluidMeshComponent.h"
#include "FluidSimulationComponent.h"

AFluidBody::AFluidBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->FluidMeshComponent = CreateDefaultSubobject<UFluidMeshComponent>(TEXT("FluidMesh"));
    this->FluidSimulationComponent = CreateDefaultSubobject<UFluidSimulationComponent>(TEXT("FluidSimulation"));
    this->SurfaceCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SurfaceCollision"));
    this->FluidMeshComponent->SetupAttachment(RootComponent);
    this->SurfaceCollisionComponent->SetupAttachment(RootComponent);
}

void AFluidBody::RegenerateFluidMesh() const {
}

void AFluidBody::OnEndOverlapSurface(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFluidBody::OnBeginOverlapSurface(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bBFromSweep, const FHitResult& SweepResult) {
}

void AFluidBody::GenerateSplash(const FVector& WorldLocation, float Strength, float SizePercent, bool bEntering, bool bLaunchFX) {
}


