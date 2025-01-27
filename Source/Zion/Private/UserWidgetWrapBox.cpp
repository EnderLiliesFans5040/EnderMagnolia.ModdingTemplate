#include "UserWidgetWrapBox.h"

UUserWidgetWrapBox::UUserWidgetWrapBox() {
    this->WrapBox = NULL;
    this->WrapSize = 500.00f;
    this->bExplicitWrapSize = true;
    this->HorizontalAlignment = HAlign_Left;
    this->Orientation = Orient_Horizontal;
}

bool UUserWidgetWrapBox::RemoveChildAt(int32 Index) {
    return false;
}

bool UUserWidgetWrapBox::RemoveChild(UWidget* Content) {
    return false;
}

bool UUserWidgetWrapBox::HasChild(UWidget* Content) const {
    return false;
}

bool UUserWidgetWrapBox::HasAnyChildren() const {
    return false;
}

UWidget* UUserWidgetWrapBox::GetWrapNavigationWidget(bool bWrapToTop) const {
    return NULL;
}

int32 UUserWidgetWrapBox::GetChildrenCount() const {
    return 0;
}

int32 UUserWidgetWrapBox::GetChildIndex(const UWidget* Content) const {
    return 0;
}

UWidget* UUserWidgetWrapBox::GetChildAt(int32 Index) const {
    return NULL;
}

TArray<UWidget*> UUserWidgetWrapBox::GetAllChildren() const {
    return TArray<UWidget*>();
}

void UUserWidgetWrapBox::ClearChildren() {
}

void UUserWidgetWrapBox::AddChild(UWidget* Content) {
}


