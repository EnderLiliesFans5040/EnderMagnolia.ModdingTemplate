#include "EventAction_GrantItemsBase.h"

UEventAction_GrantItemsBase::UEventAction_GrantItemsBase() {
    const FProperty* p_bPostSkipAction = GetClass()->FindPropertyByName("bPostSkipAction");
    (*p_bPostSkipAction->ContainerPtrToValuePtr<bool>(this)) = true;
    this->bShowUI = false;
}

void UEventAction_GrantItemsBase::OnWidgetDestruct() {
}


