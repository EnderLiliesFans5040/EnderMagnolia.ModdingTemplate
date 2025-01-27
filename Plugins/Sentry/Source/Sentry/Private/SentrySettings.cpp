#include "SentrySettings.h"
#include "SentryBeforeSendHandler.h"
#include "SentryTraceSampler.h"

USentrySettings::USentrySettings() {
    this->InitAutomatically = false;
    this->Dsn = TEXT("https://8e0468b35d7f9bf3654d34b90a6b5e81@o4506545469980672.ingest.sentry.io/4506182669762560");
    this->Debug = true;
    this->EnableAutoCrashCapturing = true;
    this->Environment = TEXT("Release");
    this->SampleRate = 1.00f;
    this->EnableAutoLogAttachment = true;
    this->AttachStacktrace = true;
    this->SendDefaultPii = false;
    this->AttachScreenshot = false;
    this->MaxBreadcrumbs = 100;
    this->EnableAutoSessionTracking = true;
    this->SessionTimeout = 30000;
    this->OverrideReleaseName = false;
    this->UseProxy = false;
    this->BeforeSendHandler = USentryBeforeSendHandler::StaticClass();
    this->EnableTracing = false;
    this->SamplingType = ESentryTracesSamplingType::UniformSampleRate;
    this->TracesSampleRate = 0.00f;
    this->TracesSampler = USentryTraceSampler::StaticClass();
    this->EnableForPromotedBuildsOnly = false;
    this->UploadSymbolsAutomatically = false;
    this->IncludeSources = false;
}


