#include "SentryTransactionContext.h"

USentryTransactionContext::USentryTransactionContext() {
}

void USentryTransactionContext::Initialize(const FString& Name, const FString& Operation) {
}

FString USentryTransactionContext::GetOperation() const {
    return TEXT("");
}

FString USentryTransactionContext::GetName() const {
    return TEXT("");
}


