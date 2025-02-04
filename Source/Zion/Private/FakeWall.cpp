#include "FakeWall.h"
#include "Components/SceneComponent.h"
#include "ClearComponent.h"

AFakeWall::AFakeWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bAutoManageLinkedVisibilityActors = true;
    this->bRequireLinkedVisibilityActorsOnSameLevel = true;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->ClearComponent = CreateDefaultSubobject<UClearComponent>(TEXT("Clear"));
}

void AFakeWall::OnClearStatusChecked(EClearStatus ClearStatus) {
}

bool AFakeWall::IsCleared() const {
    return false;
}

void AFakeWall::Hide_Implementation(bool bInstant) {
}

void AFakeWall::Clear() {
}


