#include "UserWidgetGameMenu_Page.h"

UUserWidgetGameMenu_Page::UUserWidgetGameMenu_Page() {
}



bool UUserWidgetGameMenu_Page::IsAtRestPoint() const {
    return false;
}

UUserWidgetGameMenu* UUserWidgetGameMenu_Page::GetGameMenu() const {
    return NULL;
}

UUserWidgetFooter* UUserWidgetGameMenu_Page::GetFooter() const {
    return NULL;
}

TArray<FFooterData> UUserWidgetGameMenu_Page::GetDefaultFooterEntries() const {
    return TArray<FFooterData>();
}

bool UUserWidgetGameMenu_Page::CanSwitchEquipment() const {
    return false;
}


