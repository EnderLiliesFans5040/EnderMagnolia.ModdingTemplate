#include "SentrySettings.h"
#include "SentryBeforeSendHandler.h"

USentrySettings::USentrySettings() {
    this->Dsn = TEXT("https://8e0468b35d7f9bf3654d34b90a6b5e81@o4506545469980672.ingest.sentry.io/4506182669762560");
    this->Environment = TEXT("Release");
    this->InitAutomatically = false;
    this->Debug = true;
    this->EnableForPromotedBuildsOnly = false;
    this->EnableAutoCrashCapturing = true;
    this->EnableAutoLogAttachment = true;
    this->AttachStacktrace = true;
    this->UseProxy = false;
    this->SampleRate = 1.00f;
    this->MaxBreadcrumbs = 100;
    this->AttachScreenshot = false;
    this->SendDefaultPii = false;
    this->EnableAutoSessionTracking = true;
    this->SessionTimeout = 30000;
    this->OverrideReleaseName = false;
    this->UploadSymbolsAutomatically = false;
    this->IncludeSources = false;
    this->BeforeSendHandler = USentryBeforeSendHandler::StaticClass();
}


