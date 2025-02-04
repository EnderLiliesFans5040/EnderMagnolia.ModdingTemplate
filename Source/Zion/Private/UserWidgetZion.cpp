#include "UserWidgetZion.h"

UUserWidgetZion::UUserWidgetZion() {
    this->bMouseHoverFocus = false;
    this->bTriggerOnChildFocus = false;
    this->bAcceptRepeatKeys = false;
    this->WidgetHost = NULL;
    this->OnConfirmFMODEvent = NULL;
    this->OnCancelFMODEvent = NULL;
    this->OnNavigationFMODEvent = NULL;
}

void UUserWidgetZion::SetFocusToLastFocusedChild(UWidget* FallbackWidget) {
}

void UUserWidgetZion::ResetLastFocusedChild() {
}

void UUserWidgetZion::PlaySoundEvent(UFMODEvent* SoundEffect) const {
}


FEventReply UUserWidgetZion::OnPressUp_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressRight_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressPreviousAlt_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressPrevious_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressNextAlt_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressNext_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressLeft_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressDown_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressContextAlt_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressContext_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressConfirm_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnPressCancel_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnDownRight_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnDownPreviousAlt_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnDownPrevious_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnDownNextAlt_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnDownNext_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}

FEventReply UUserWidgetZion::OnDownLeft_Implementation(const FKeyEvent& KeyEvent) {
    return FEventReply{};
}


bool UUserWidgetZion::IsOnFocusPath() const {
    return false;
}

bool UUserWidgetZion::IsFocusedFromMouse() const {
    return false;
}

void UUserWidgetZion::ChangeExplanationText(const FText& InExplanationText) {
}


