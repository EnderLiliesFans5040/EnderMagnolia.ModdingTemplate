#include "SentryUser.h"

USentryUser::USentryUser() {
}

void USentryUser::SetUsername(const FString& UserName) {
}

void USentryUser::SetIpAddress(const FString& IpAddress) {
}

void USentryUser::SetId(const FString& ID) {
}

void USentryUser::SetEmail(const FString& Email) {
}

void USentryUser::SetData(const TMap<FString, FString>& Data) {
}

FString USentryUser::GetUsername() const {
    return TEXT("");
}

FString USentryUser::GetIpAddress() const {
    return TEXT("");
}

FString USentryUser::GetId() const {
    return TEXT("");
}

FString USentryUser::GetEmail() const {
    return TEXT("");
}

TMap<FString, FString> USentryUser::GetData() const {
    return TMap<FString, FString>();
}


