#include "SentryTransaction.h"

USentryTransaction::USentryTransaction() {
}

USentrySpan* USentryTransaction::StartChild(const FString& Operation, const FString& Description) {
    return NULL;
}

void USentryTransaction::SetTag(const FString& Key, const FString& Value) {
}

void USentryTransaction::SetName(const FString& Name) {
}

void USentryTransaction::SetData(const FString& Key, const TMap<FString, FString>& Values) {
}

void USentryTransaction::RemoveTag(const FString& Key) {
}

void USentryTransaction::RemoveData(const FString& Key) {
}

bool USentryTransaction::IsFinished() const {
    return false;
}

void USentryTransaction::Finish() {
}


