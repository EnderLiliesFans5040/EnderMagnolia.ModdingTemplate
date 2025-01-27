#include "GameViewportZion.h"
#include "Templates/SubclassOf.h"

UGameViewportZion::UGameViewportZion() {
}

void UGameViewportZion::SetWorldRenderingEnable(bool bEnableWorldRendering) {
}

void UGameViewportZion::SetViewportOverlayWidgetVisible(bool bVisible) {
}

void UGameViewportZion::SetViewportOverlayRenderOpacity(float Opacity) {
}

bool UGameViewportZion::IsShowingCollision() const {
    return false;
}

UUserWidget* UGameViewportZion::GetUserWidgetInStack(TSubclassOf<UUserWidget> ClassToFind) const {
    return NULL;
}

UGameViewportZion* UGameViewportZion::Get() {
    return NULL;
}


