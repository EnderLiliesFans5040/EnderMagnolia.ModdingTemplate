#include "StateComponent.h"
#include "Templates/SubclassOf.h"

UStateComponent::UStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UStateComponent::RemoveStates(const TArray<TSubclassOf<UState>>& States) {
}

void UStateComponent::RemoveState(const TSubclassOf<UState> State) {
}

void UStateComponent::RemoveAllStates() {
}

bool UStateComponent::IsStunned() const {
    return false;
}

bool UStateComponent::IsMovementLocked() const {
    return false;
}

bool UStateComponent::IsInputActionLocked(const UInputAction* InputAction) const {
    return false;
}

bool UStateComponent::IsInFreezeCritical() const {
    return false;
}

bool UStateComponent::IsFreeCommandLayerLocked() const {
    return false;
}

bool UStateComponent::IsFacingLocked() const {
    return false;
}

bool UStateComponent::IsDebuffed() const {
    return false;
}

bool UStateComponent::HasState(const TSubclassOf<UState>& State) const {
    return false;
}

bool UStateComponent::HasBusyState() const {
    return false;
}

bool UStateComponent::HasAnyState(const TArray<TSubclassOf<UState>>& States) const {
    return false;
}

bool UStateComponent::HasAllStates(const TArray<TSubclassOf<UState>>& States) const {
    return false;
}

void UStateComponent::AddStatesForFrameCount(const TArray<TSubclassOf<UState>>& States, int32 FrameCount) {
}

void UStateComponent::AddStatesForDuration(const TArray<TSubclassOf<UState>>& States, float Duration) {
}

void UStateComponent::AddStates(const TArray<TSubclassOf<UState>>& States) {
}

void UStateComponent::AddState(const TSubclassOf<UState> State) {
}


