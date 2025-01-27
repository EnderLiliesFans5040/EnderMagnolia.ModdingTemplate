#include "Trigger.h"
#include "Components/BillboardComponent.h"
#include "Components/SceneComponent.h"

ATrigger::ATrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("EditorBillboard"));
    this->BillboardComponent->SetupAttachment(RootComponent);
}


