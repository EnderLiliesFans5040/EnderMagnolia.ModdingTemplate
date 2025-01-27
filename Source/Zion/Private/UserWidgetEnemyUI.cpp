#include "UserWidgetEnemyUI.h"

UUserWidgetEnemyUI::UUserWidgetEnemyUI() {
}

void UUserWidgetEnemyUI::OnRequestRemoveFromParent_Implementation(bool bImmediate) {
}

APawn* UUserWidgetEnemyUI::GetPawn() const {
    return NULL;
}

FEnemyData UUserWidgetEnemyUI::GetEnemyData() const {
    return FEnemyData{};
}

AAIController* UUserWidgetEnemyUI::GetController() const {
    return NULL;
}


