#include "SentrySamplingContext.h"

USentrySamplingContext::USentrySamplingContext() {
}

USentryTransactionContext* USentrySamplingContext::GetTransactionContext() const {
    return NULL;
}

TMap<FString, FString> USentrySamplingContext::GetCustomSamplingContext() const {
    return TMap<FString, FString>();
}


