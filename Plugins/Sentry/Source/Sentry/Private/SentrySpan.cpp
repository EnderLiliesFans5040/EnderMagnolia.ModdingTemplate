#include "SentrySpan.h"

USentrySpan::USentrySpan() {
}

void USentrySpan::SetTag(const FString& Key, const FString& Value) {
}

void USentrySpan::SetData(const FString& Key, const TMap<FString, FString>& Values) {
}

void USentrySpan::RemoveTag(const FString& Key) {
}

void USentrySpan::RemoveData(const FString& Key) {
}

bool USentrySpan::IsFinished() const {
    return false;
}

void USentrySpan::Finish() {
}


