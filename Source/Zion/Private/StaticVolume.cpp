#include "StaticVolume.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"

AStaticVolume::AStaticVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("EditorBillboard"));
    this->BillboardComponent->SetupAttachment(RootComponent);
}


