#include "StatComponent.h"

UStatComponent::UStatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFullyRestoreOnBeginPlay = true;
    this->SubtractBlockingStates.AddDefaulted(1);
    this->MaxValue = 1000;
    this->CurrValue = 0;
}

int32 UStatComponent::Subtract(int32 ValueToSubtract) {
    return 0;
}

void UStatComponent::SetMaxValue(int32 NewMaxValue) {
}

int32 UStatComponent::GetMaxValue() const {
    return 0;
}

int32 UStatComponent::GetCurrValue() const {
    return 0;
}

float UStatComponent::GetCurrRatio() const {
    return 0.0f;
}

void UStatComponent::FullyRestore() {
}

int32 UStatComponent::Add(int32 ValueToAdd) {
    return 0;
}


