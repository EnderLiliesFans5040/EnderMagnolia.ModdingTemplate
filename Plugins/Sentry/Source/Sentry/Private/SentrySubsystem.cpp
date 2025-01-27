#include "SentrySubsystem.h"

USentrySubsystem::USentrySubsystem() {
    this->BeforeSendHandler = NULL;
    this->TraceSampler = NULL;
}

USentryTransaction* USentrySubsystem::StartTransactionWithContextAndOptions(USentryTransactionContext* Context, const TMap<FString, FString>& Options) {
    return NULL;
}

USentryTransaction* USentrySubsystem::StartTransactionWithContext(USentryTransactionContext* Context) {
    return NULL;
}

USentryTransaction* USentrySubsystem::StartTransaction(const FString& Name, const FString& Operation) {
    return NULL;
}

void USentrySubsystem::StartSession() {
}

void USentrySubsystem::SetUser(USentryUser* User) {
}

void USentrySubsystem::SetTag(const FString& Key, const FString& Value) {
}

void USentrySubsystem::SetLevel(ESentryLevel Level) {
}

void USentrySubsystem::SetContext(const FString& Key, const TMap<FString, FString>& Values) {
}

void USentrySubsystem::RemoveUser() {
}

void USentrySubsystem::RemoveTag(const FString& Key) {
}

bool USentrySubsystem::IsSupportedForCurrentSettings() {
    return false;
}

bool USentrySubsystem::IsEnabled() {
    return false;
}

ESentryCrashedLastRun USentrySubsystem::IsCrashedLastRun() {
    return ESentryCrashedLastRun::NotEvaluated;
}

void USentrySubsystem::InitializeWithSettings(const FConfigureSettingsDelegate& OnConfigureSettings) {
}

void USentrySubsystem::Initialize() {
}

void USentrySubsystem::EndSession() {
}

void USentrySubsystem::ConfigureScope(const FConfigureScopeDelegate& OnConfigureScope) {
}

void USentrySubsystem::Close() {
}

void USentrySubsystem::ClearBreadcrumbs() {
}

void USentrySubsystem::CaptureUserFeedbackWithParams(USentryId* EventId, const FString& Email, const FString& Comments, const FString& Name) {
}

void USentrySubsystem::CaptureUserFeedback(USentryUserFeedback* UserFeedback) {
}

USentryId* USentrySubsystem::CaptureMessageWithScope(const FString& Message, const FConfigureScopeDelegate& OnConfigureScope, ESentryLevel Level) {
    return NULL;
}

USentryId* USentrySubsystem::CaptureMessage(const FString& Message, ESentryLevel Level) {
    return NULL;
}

USentryId* USentrySubsystem::CaptureEventWithScope(USentryEvent* Event, const FConfigureScopeDelegate& OnConfigureScope) {
    return NULL;
}

USentryId* USentrySubsystem::CaptureEvent(USentryEvent* Event) {
    return NULL;
}

void USentrySubsystem::AddBreadcrumbWithParams(const FString& Message, const FString& Category, const FString& Type, const TMap<FString, FString>& Data, ESentryLevel Level) {
}

void USentrySubsystem::AddBreadcrumb(USentryBreadcrumb* Breadcrumb) {
}


