#include "UniformGridPanelZion.h"

UUniformGridPanelZion::UUniformGridPanelZion() {
    this->Orientation = Orient_Horizontal;
    this->ElementCountPerRow = 1;
    this->ContentHorizontalAlignment = HAlign_Left;
    this->ContentVerticalAlignment = VAlign_Top;
}

int32 UUniformGridPanelZion::GetElementCountPerRow() const {
    return 0;
}

void UUniformGridPanelZion::AddChildAuto(UWidget* Content) {
}


