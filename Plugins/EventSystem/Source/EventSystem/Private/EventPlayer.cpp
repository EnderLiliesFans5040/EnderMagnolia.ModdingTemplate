#include "EventPlayer.h"

UEventPlayer::UEventPlayer() {
    this->EventAsset = NULL;
    this->EventContext = NULL;
    this->EventUI = NULL;
    this->EventCamera = NULL;
}

void UEventPlayer::SkipEvent() {
}

void UEventPlayer::PlayEvent(APlayerController* PlayerController, UEventAsset* InEventAsset, const TMap<FName, AActor*>& InActorBindings, const FEventBlackboardInit& InDefaultValues) {
}

void UEventPlayer::OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

EEventPlayerState UEventPlayer::GetState() const {
    return EEventPlayerState::None;
}

UEventContext* UEventPlayer::GetEventContext() const {
    return NULL;
}

UEventPlayer* UEventPlayer::CreateEventPlayer(AActor* Owner) {
    return NULL;
}


