#include "RefreshableRichTextBlock.h"

URefreshableRichTextBlock::URefreshableRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->DecoratorClasses.AddDefaulted(1);
    this->DecoratorMode = ERichTextDecoratorMode::Auto;
    this->Format = FText::FromString(TEXT("{0}"));
}

void URefreshableRichTextBlock::SetupAndRefresh(const FText& NewFormat, const TArray<FRichTextInputElement>& NewFormatElements, const TArray<FString>& NewStringElements) {
}

void URefreshableRichTextBlock::SetFormatElements(const TArray<FRichTextInputElement>& NewFormatElements, const TArray<FString>& NewStringElements) {
}

void URefreshableRichTextBlock::SetFormat(const FText& NewFormat) {
}

void URefreshableRichTextBlock::SetDecoratorMode(ERichTextDecoratorMode NewDecoratorMode) {
}

void URefreshableRichTextBlock::Refresh() {
}

TArray<FRichTextInputElement> URefreshableRichTextBlock::GetFormatElements() const {
    return TArray<FRichTextInputElement>();
}

ERichTextDecoratorMode URefreshableRichTextBlock::GetDecoratorMode() const {
    return ERichTextDecoratorMode::Auto;
}


