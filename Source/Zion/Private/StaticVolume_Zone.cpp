#include "StaticVolume_Zone.h"
#include "Components/PostProcessComponent.h"
#include "ECameraModifierActivationType.h"

AStaticVolume_Zone::AStaticVolume_Zone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationType = ECameraModifierActivationType::Manual;
    this->bHasCameraClamp = true;
    this->CameraClampLocations.AddDefaulted(4);
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
    this->bUsePostProcess = false;
    this->bUseFog = false;
    this->FogDepthMin = 0.00f;
    this->FogDepthMax = 1000.00f;
    this->FogHeightMin = 0.00f;
    this->FogHeightMax = 1000.00f;
    this->PostProcessComponent->SetupAttachment(RootComponent);
}

void AStaticVolume_Zone::SetZoneLevel(UWorld* InZoneLevel) {
}


