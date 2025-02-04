#include "SentryLibrary.h"

USentryLibrary::USentryLibrary() {
}

TArray<uint8> USentryLibrary::StringToBytesArray(const FString& InString) {
    return TArray<uint8>();
}

FString USentryLibrary::SaveStringToFile(const FString& InString, const FString& Filename) {
    return TEXT("");
}

USentryUserFeedback* USentryLibrary::CreateSentryUserFeedback(USentryId* EventId, const FString& Name, const FString& Email, const FString& Comments) {
    return NULL;
}

USentryUser* USentryLibrary::CreateSentryUser(const FString& Email, const FString& ID, const FString& UserName, const FString& IpAddress, const TMap<FString, FString>& Data) {
    return NULL;
}

USentryTransactionContext* USentryLibrary::CreateSentryTransactionContext(const FString& Name, const FString& Operation) {
    return NULL;
}

USentryEvent* USentryLibrary::CreateSentryEvent(const FString& Message, ESentryLevel Level) {
    return NULL;
}

USentryBreadcrumb* USentryLibrary::CreateSentryBreadcrumb(const FString& Message, const FString& Type, const FString& Category, const TMap<FString, FString>& Data, ESentryLevel Level) {
    return NULL;
}

USentryAttachment* USentryLibrary::CreateSentryAttachmentWithPath(const FString& Path, const FString& Filename, const FString& ContentType) {
    return NULL;
}

USentryAttachment* USentryLibrary::CreateSentryAttachmentWithData(const TArray<uint8>& Data, const FString& Filename, const FString& ContentType) {
    return NULL;
}

FString USentryLibrary::ByteArrayToString(const TArray<uint8>& Array) {
    return TEXT("");
}


