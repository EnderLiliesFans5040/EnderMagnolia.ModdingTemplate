#include "SoundSubsystem.h"

USoundSubsystem::USoundSubsystem() {
    this->CurrentBGM = NULL;
    this->CurrentAmbience = NULL;
    this->VoiceEvent = NULL;
}

void USoundSubsystem::StopSoundEventInstance(const FFMODEventInstance& SoundInstance) {
}

void USoundSubsystem::StopBGM(float FadeOutTime) {
}

void USoundSubsystem::StopAmbience() {
}

void USoundSubsystem::StopAll() {
}

void USoundSubsystem::SetVolume(ESoundFamily SoundFamily, float NewVolume) {
}

void USoundSubsystem::SetVoiceLanguage(const FString& Locale) {
}

void USoundSubsystem::SetParameter(FName Parameter, float Value) {
}

void USoundSubsystem::ResumeFamily(ESoundFamily SoundFamily) {
}

void USoundSubsystem::ResumeBGM() {
}

void USoundSubsystem::ResetVolumes() {
}

void USoundSubsystem::RefreshAudioVolumes() {
}

UFMODAudioComponent* USoundSubsystem::PlayVoiceOnActor(AActor* Actor, const FString& VoiceID) {
    return NULL;
}

UFMODAudioComponent* USoundSubsystem::PlayVoiceFromText(const FText& Text, AActor* Speaker) {
    return NULL;
}

UFMODAudioComponent* USoundSubsystem::PlayVoice(const FString& VoiceID) {
    return NULL;
}

FFMODEventInstance USoundSubsystem::PlaySoundEventAtWorldLocation(UFMODEvent* SoundEvent, const FVector& WorldLocation) {
    return FFMODEventInstance{};
}

UFMODAudioComponent* USoundSubsystem::PlaySoundEventAttached(UFMODEvent* SoundEvent, USceneComponent* AttachToComponent) {
    return NULL;
}

FFMODEventInstance USoundSubsystem::PlaySoundEvent(UFMODEvent* SoundEvent) {
    return FFMODEventInstance{};
}

void USoundSubsystem::PlayBGM(UFMODEvent* SoundEvent) {
}

void USoundSubsystem::PlayAmbience(UFMODEvent* SoundEvent) {
}

void USoundSubsystem::PauseFamily(ESoundFamily SoundFamily) {
}

void USoundSubsystem::PauseBGM() {
}

float USoundSubsystem::GetVolume(ESoundFamily SoundFamily) const {
    return 0.0f;
}

FString USoundSubsystem::GetVoiceLanguage() const {
    return TEXT("");
}

UFMODEvent* USoundSubsystem::GetCurrentBGM() const {
    return NULL;
}

UFMODEvent* USoundSubsystem::GetCurrentAmbience() const {
    return NULL;
}

void USoundSubsystem::EnableSnapshot(UFMODEvent* Snapshot, FName Tag) {
}

void USoundSubsystem::DisableSnapshot(FName Tag) {
}

void USoundSubsystem::DisableAllSnapshots() {
}


