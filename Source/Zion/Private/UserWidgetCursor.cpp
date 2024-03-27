#include "UserWidgetCursor.h"

UUserWidgetCursor::UUserWidgetCursor() : UUserWidget(FObjectInitializer::Get()) {
    this->DPIScaler = NULL;
}


void UUserWidgetCursor::OnCursorVisibilityChanged() {
}


