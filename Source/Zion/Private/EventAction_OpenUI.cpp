#include "EventAction_OpenUI.h"

UEventAction_OpenUI::UEventAction_OpenUI() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
    this->UserWidgetClass = NULL;
}

void UEventAction_OpenUI::OnWidgetDestruct() {
}


