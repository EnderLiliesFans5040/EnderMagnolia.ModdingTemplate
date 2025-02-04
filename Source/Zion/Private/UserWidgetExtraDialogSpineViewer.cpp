#include "UserWidgetExtraDialogSpineViewer.h"

UUserWidgetExtraDialogSpineViewer::UUserWidgetExtraDialogSpineViewer() {
    this->SpineViewerLocationContainer = NULL;
    this->SceneContainer = NULL;
    this->SpineWidget = NULL;
    this->bCanChangeCharacter = false;
    this->MoveSpeed = 1500.00f;
}

void UUserWidgetExtraDialogSpineViewer::SetupMinMaxPositions(float MinScaleFactor) {
}

void UUserWidgetExtraDialogSpineViewer::ResetSpineViewerToDefaultLocation() {
}

void UUserWidgetExtraDialogSpineViewer::ReplaceSpineMaterials() {
}

void UUserWidgetExtraDialogSpineViewer::PlaySpineAnimation(const FAnimationNameData& AnimationNameData, EExtraAnimationRootMotionMode RootMotionMode) {
}

void UUserWidgetExtraDialogSpineViewer::PlayAdditionalAnimations(const TArray<FString>& AdditionalAnimations) {
}

void UUserWidgetExtraDialogSpineViewer::OnSpineAnimationFinished(UTrackEntry* TrackEntry) {
}

void UUserWidgetExtraDialogSpineViewer::OnAfterUpdateWorldTransform(USpineWidget* Skeleton) {
}


void UUserWidgetExtraDialogSpineViewer::ClearSpineAnimation() {
}

void UUserWidgetExtraDialogSpineViewer::ClearInputs() {
}

bool UUserWidgetExtraDialogSpineViewer::CanMoveSpineViewer_Implementation() const {
    return false;
}


