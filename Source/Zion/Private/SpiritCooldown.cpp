#include "SpiritCooldown.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "PaperSpriteComponent.h"
#include "FollowTargetComponent.h"

ASpiritCooldown::ASpiritCooldown(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->FollowTargetComponent = CreateDefaultSubobject<UFollowTargetComponent>(TEXT("FollowTarget"));
    this->SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara"));
    this->PlayerControllerZion = NULL;
    this->MID_Sprite = NULL;
    this->NiagaraComponent->SetupAttachment(RootComponent);
    this->SpriteComponent->SetupAttachment(RootComponent);
}

void ASpiritCooldown::OnUnPossessPlayer(APawn* Pawn) {
}

void ASpiritCooldown::OnNiagaraSystemFinished(UNiagaraComponent* PSystem) {
}



void ASpiritCooldown::OnEventStopped() {
}

void ASpiritCooldown::OnEventStarted() {
}


void ASpiritCooldown::OnCommandFinishCooldown(const UCommandSet* CommandSetFinished, bool bReset) {
}


