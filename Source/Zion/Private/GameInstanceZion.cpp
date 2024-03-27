#include "GameInstanceZion.h"

UGameInstanceZion::UGameInstanceZion() {
    this->LaunchGameIntent = ELaunchGameIntent::Unknown;
}

void UGameInstanceZion::SetLaunchGameIntent(ELaunchGameIntent NewLaunchGameIntent) {
}

void UGameInstanceZion::OnAutoUploadCrashReportChanged() {
}

void UGameInstanceZion::HandleSettingsDelegate(USentrySettings* Settings) {
}

ELaunchGameIntent UGameInstanceZion::GetLaunchGameIntent() const {
    return ELaunchGameIntent::Unknown;
}

UGameInstanceZion* UGameInstanceZion::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UGameInstanceZion::ClearLaunchGameIntent() {
}


