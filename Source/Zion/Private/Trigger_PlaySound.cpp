#include "Trigger_PlaySound.h"
#include "Components/SceneComponent.h"

ATrigger_PlaySound::ATrigger_PlaySound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachSoundSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("AttachSound"));
    this->bOneShot = true;
    this->AttachSoundSceneComponent->SetupAttachment(RootComponent);
}


