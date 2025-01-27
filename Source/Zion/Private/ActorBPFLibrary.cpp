#include "ActorBPFLibrary.h"

UActorBPFLibrary::UActorBPFLibrary() {
}

void UActorBPFLibrary::ToggleActor(AActor* Actor) {
}

void UActorBPFLibrary::ResetVelocity(AActor* Actor, bool bResetX, bool bResetY, bool bResetZ) {
}

bool UActorBPFLibrary::IsPlayer(const AActor* Actor) {
    return false;
}

FName UActorBPFLibrary::GetWorldIDForActor(const AActor* Actor) {
    return NAME_None;
}

FVector UActorBPFLibrary::GetTopLocation(const AActor* Actor) {
    return FVector{};
}

FVector UActorBPFLibrary::GetTargetPivotLocation(const AActor* Actor) {
    return FVector{};
}

USceneComponent* UActorBPFLibrary::GetTargetPivotComponent(const AActor* Actor) {
    return NULL;
}

float UActorBPFLibrary::GetHalfHeight(const AActor* Actor) {
    return 0.0f;
}

FVector UActorBPFLibrary::GetBottomLocation(const AActor* Actor) {
    return FVector{};
}

FName UActorBPFLibrary::GetActorID(const AActor* Actor) {
    return NAME_None;
}

FName UActorBPFLibrary::GenerateClearIDForActor(const AActor* Actor) {
    return NAME_None;
}

void UActorBPFLibrary::FlushAnimations(const AActor* Actor, bool bResetAnimator) {
}

void UActorBPFLibrary::ClearMovementBase(ACharacter* Character) {
}


