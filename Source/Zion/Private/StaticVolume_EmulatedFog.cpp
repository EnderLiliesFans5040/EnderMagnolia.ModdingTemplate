#include "StaticVolume_EmulatedFog.h"
#include "Components/BoxComponent.h"

AStaticVolume_EmulatedFog::AStaticVolume_EmulatedFog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FogArea = CreateDefaultSubobject<UBoxComponent>(TEXT("FogArea"));
    this->BlendIn = 0.50f;
    this->BlendOut = 0.50f;
    this->FogArea->SetupAttachment(RootComponent);
}


