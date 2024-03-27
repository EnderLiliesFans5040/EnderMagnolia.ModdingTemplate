#include "SystemBPFLibrary.h"

USystemBPFLibrary::USystemBPFLibrary() {
}

void USystemBPFLibrary::UpdateUITexturesForCurrentResolution() {
}

bool USystemBPFLibrary::IsShippingBuild() {
    return false;
}

bool USystemBPFLibrary::IsPCBuild() {
    return false;
}

bool USystemBPFLibrary::IsEditor() {
    return false;
}

bool USystemBPFLibrary::IsEarlyAccessBuild() {
    return false;
}

bool USystemBPFLibrary::IsCrashReportAllowedBuild() {
    return false;
}

bool USystemBPFLibrary::GetWindowedResolutions(TArray<FIntPoint>& OutResolutions) {
    return false;
}

TArray<FString> USystemBPFLibrary::GetRuntimeTextureInfosFromGroup(const TEnumAsByte<TextureGroup>& TextureGroup) {
    return TArray<FString>();
}

FString USystemBPFLibrary::GetRuntimeTextureInfos(const UTexture2D* Texture2D) {
    return TEXT("");
}

FString USystemBPFLibrary::GetRHIName() {
    return TEXT("");
}

FString USystemBPFLibrary::GetMoviePathFromMovieName(const FString& MovieName) {
    return TEXT("");
}

FString USystemBPFLibrary::GetGameVersion() {
    return TEXT("");
}

int32 USystemBPFLibrary::GetGameBuildNumber() {
    return 0;
}

FString USystemBPFLibrary::GetBinkURLFromPlatformMediaSource(const UPlatformMediaSource* PlatformMediaSource) {
    return TEXT("");
}

void USystemBPFLibrary::FlushTextureStreaming(bool bDeferToEndFrame) {
}

bool USystemBPFLibrary::DoesGameVersionMatchesPakVersion() {
    return false;
}


