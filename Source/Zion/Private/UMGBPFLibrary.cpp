#include "UMGBPFLibrary.h"

UUMGBPFLibrary::UUMGBPFLibrary() {
}

void UUMGBPFLibrary::SetBrushFromSprite(UImage* Target, UPaperSprite* Sprite, bool bMatchSize) {
}

void UUMGBPFLibrary::SetBrushFromSoftSprite(UImage* Target, TSoftObjectPtr<UPaperSprite> SoftSprite, bool bMatchSize) {
}

void UUMGBPFLibrary::ResetAllNiagaraWidgets() {
}

bool UUMGBPFLibrary::IsUIContextKey(const UObject* WorldContextObject, const FKey& Key) {
    return false;
}

bool UUMGBPFLibrary::IsUIContextAltKey(const UObject* WorldContextObject, const FKey& Key) {
    return false;
}

bool UUMGBPFLibrary::IsUIConfirmKey(const UObject* WorldContextObject, const FKey& Key) {
    return false;
}

bool UUMGBPFLibrary::IsUICancelKey(const UObject* WorldContextObject, const FKey& Key) {
    return false;
}

bool UUMGBPFLibrary::IsRepeatKeyEvent(const FKeyEvent& KeyEvent) {
    return false;
}

bool UUMGBPFLibrary::IsKeyUIInputType(const UObject* WorldContextObject, const FKey& Key, EUIInputType UIInputType) {
    return false;
}

bool UUMGBPFLibrary::IsActionInputTypeKey(const UObject* WorldContextObject, const FKey& Key, const EActionInputType& ActionInputType) {
    return false;
}

void UUMGBPFLibrary::InvalidateAllWidgets() {
}

int32 UUMGBPFLibrary::GetUMGZOrder(EUMGLayer UMGLayer) {
    return 0;
}

EFocusCause UUMGBPFLibrary::GetFocusCause(FFocusEvent FocusEvent) {
    return EFocusCause::Mouse;
}

void UUMGBPFLibrary::AddToViewportAtLayer(UUserWidget* Widget, EUMGLayer UMGLayer) {
}


