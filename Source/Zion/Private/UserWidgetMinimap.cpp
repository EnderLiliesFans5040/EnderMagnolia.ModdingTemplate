#include "UserWidgetMinimap.h"

UUserWidgetMinimap::UUserWidgetMinimap() {
    this->DisplayHolder = NULL;
    this->RetainerBox = NULL;
    this->MinimapHolder = NULL;
    this->MinimapWidgetHolder = NULL;
    this->PlayerIcon = NULL;
    this->StoryEventIconsHolder = NULL;
    this->StoryEventDirectionsHolder = NULL;
    this->CurrentWidgetMapArea = NULL;
    this->Zoom = 1.00f;
    this->FullscreenOpacity = 0.90f;
}

void UUserWidgetMinimap::RequestRender() {
}

void UUserWidgetMinimap::OnStoryLevelChanged() {
}

void UUserWidgetMinimap::OnGameMapChanged() {
}

void UUserWidgetMinimap::InitializeDefaultDisplayValues() {
}

void UUserWidgetMinimap::ChangeDisplayMode() {
}


