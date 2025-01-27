#include "BloomBox.h"
#include "Components/SlateWrapperTypes.h"

UBloomBox::UBloomBox() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->GenerationTiming = EBloomBoxGenerationTiming::OnConstruct;
    this->RuntimeEffectValue = 0.00f;
    this->ContentHorizontalAlignment = HAlign_Fill;
    this->ContentVerticalAlignment = VAlign_Fill;
}

void UBloomBox::SetRuntimeEffectValue(float InValue) {
}

void UBloomBox::SetBloomColor(FLinearColor InColor) {
}

void UBloomBox::RequestRender() {
}

float UBloomBox::GetRuntimeEffectValue() const {
    return 0.0f;
}

FLinearColor UBloomBox::GetBloomColor() const {
    return FLinearColor{};
}


