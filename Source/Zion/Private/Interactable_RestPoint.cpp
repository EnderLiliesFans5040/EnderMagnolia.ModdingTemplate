#include "Interactable_RestPoint.h"
#include "Components/ChildActorComponent.h"

AInteractable_RestPoint::AInteractable_RestPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerStartChildActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("PlayerStartChildActor"));
    this->PlayerStartChildActor->SetupAttachment(RootComponent);
}

void AInteractable_RestPoint::SetNextEventDataHandle(const FDataTableRowHandle& InNextEventDataHandle) {
}

FDataTableRowHandle AInteractable_RestPoint::GetRestPointDataHandle() const {
    return FDataTableRowHandle{};
}

FDataTableRowHandle AInteractable_RestPoint::GetNextEventDataHandle() const {
    return FDataTableRowHandle{};
}

void AInteractable_RestPoint::ClearNextEventDataHandle() {
}


