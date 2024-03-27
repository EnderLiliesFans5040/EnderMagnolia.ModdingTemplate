#include "UserWidgetCurrencyCounter.h"

UUserWidgetCurrencyCounter::UUserWidgetCurrencyCounter() {
    this->AccumulatingCurrencyDuration = 1.00f;
    this->WaitingDuration = 1.00f;
}

void UUserWidgetCurrencyCounter::WaitingTimerFinished() {
}

void UUserWidgetCurrencyCounter::StartAddingCurrency() {
}

void UUserWidgetCurrencyCounter::StartAccumulatingCurrency(const int32 InAccumulatedCurrency) {
}

void UUserWidgetCurrencyCounter::Show(const bool bRefreshCurrencyText) {
}

void UUserWidgetCurrencyCounter::SetCurrencyText(const int32 Currency) {
}

void UUserWidgetCurrencyCounter::SetAccumulatedCurrencyText(const int32 Currency) {
}







void UUserWidgetCurrencyCounter::Hide() {
}

int32 UUserWidgetCurrencyCounter::GetCurrencyFromInventory() const {
    return 0;
}

void UUserWidgetCurrencyCounter::AddCurrency(const ECurrencyType& CurrencyType, const int32 AddedCount, const int32 PreviousCount) {
}

void UUserWidgetCurrencyCounter::AccumulatingCurrencyTimerFinished() {
}


