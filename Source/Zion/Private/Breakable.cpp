#include "Breakable.h"
#include "Components/SceneComponent.h"
#include "SpineBoneComponent.h"
#include "SpineFXComponent.h"
#include "ClearComponent.h"
#include "DeathComponent.h"
#include "StatHPComponent.h"

ABreakable::ABreakable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->StatHPComponent = CreateDefaultSubobject<UStatHPComponent>(TEXT("StatHP"));
    this->DeathComponent = CreateDefaultSubobject<UDeathComponent>(TEXT("Death"));
    this->ClearComponent = CreateDefaultSubobject<UClearComponent>(TEXT("Clear"));
    this->SpineFXComponent = CreateDefaultSubobject<USpineFXComponent>(TEXT("SpineFX"));
    this->SpineBoneComponent = CreateDefaultSubobject<USpineBoneComponent>(TEXT("SpineBone"));
    this->bMarkAsClearOnDeath = true;
    this->bRotateBreakFXFromLastAttacker = false;
    this->OnBreakFMODEvent = NULL;
}

void ABreakable::OnClearStatusChecked(EClearStatus ClearStatus) {
}

void ABreakable::OnBreakableReceivedDamage(AActor* Source, int32 Value) {
}

void ABreakable::OnBreakableDeathProcessStart() {
}


