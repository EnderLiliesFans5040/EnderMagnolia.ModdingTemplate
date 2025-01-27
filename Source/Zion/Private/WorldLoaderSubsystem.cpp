#include "WorldLoaderSubsystem.h"

UWorldLoaderSubsystem::UWorldLoaderSubsystem() {
}

void UWorldLoaderSubsystem::SwitchGameMap_PostFadeOut() {
}

void UWorldLoaderSubsystem::SwitchGameMap_PostFadeIn() {
}

void UWorldLoaderSubsystem::OpenWorld(TSoftObjectPtr<UWorld> WorldToLoad, FName PlayerStartTag, const FFadeDescriptionData& FadeOutDescription, const FFadeDescriptionData& FadeInDescription) {
}

void UWorldLoaderSubsystem::OpenGameMap(const FDataTableRowHandle& GameMapHandle, const FName PlayerStartTag, bool bForceReload, const FFadeDescriptionData& FadeOutDescription, const FFadeDescriptionData& FadeInDescription) {
}

void UWorldLoaderSubsystem::OnPostLoad() {
}

void UWorldLoaderSubsystem::OnLevelStreamingDynamicLoaded() {
}

void UWorldLoaderSubsystem::OnFadeOutFinished() {
}

void UWorldLoaderSubsystem::OnFadeInFinished() {
}

bool UWorldLoaderSubsystem::IsLoading(bool bConsiderFadeAsLoading) const {
    return false;
}

bool UWorldLoaderSubsystem::IsAvailable() const {
    return false;
}

FName UWorldLoaderSubsystem::GetCurrentPlayerStartTag() const {
    return NAME_None;
}

FName UWorldLoaderSubsystem::GetCurrentGameMapID() const {
    return NAME_None;
}

FGameMapData UWorldLoaderSubsystem::GetCurrentGameMapData() const {
    return FGameMapData{};
}


