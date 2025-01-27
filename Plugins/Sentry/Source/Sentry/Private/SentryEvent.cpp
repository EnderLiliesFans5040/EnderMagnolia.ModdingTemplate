#include "SentryEvent.h"

USentryEvent::USentryEvent() {
}

void USentryEvent::SetMessage(const FString& Message) {
}

void USentryEvent::SetLevel(ESentryLevel Level) {
}

bool USentryEvent::IsCrash() const {
    return false;
}

FString USentryEvent::GetMessage() const {
    return TEXT("");
}

ESentryLevel USentryEvent::GetLevel() const {
    return ESentryLevel::Debug;
}

USentryEvent* USentryEvent::CreateEventWithMessageAndLevel(const FString& Message, ESentryLevel Level) {
    return NULL;
}


