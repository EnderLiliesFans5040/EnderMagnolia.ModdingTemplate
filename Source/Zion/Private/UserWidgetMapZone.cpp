#include "UserWidgetMapZone.h"

UUserWidgetMapZone::UUserWidgetMapZone() {
    this->bCanvasAutoSize = false;
    this->ParentMapArea = NULL;
}

void UUserWidgetMapZone::VisitZone_Implementation() {
}

void UUserWidgetMapZone::ShowZone_Implementation() {
}

void UUserWidgetMapZone::RevealZone_Implementation() {
}

bool UUserWidgetMapZone::IsCleared() const {
    return false;
}

void UUserWidgetMapZone::HideZone_Implementation() {
}

void UUserWidgetMapZone::CompleteZone_Implementation() {
}


