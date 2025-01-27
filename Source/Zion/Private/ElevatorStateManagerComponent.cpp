#include "ElevatorStateManagerComponent.h"

UElevatorStateManagerComponent::UElevatorStateManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

EElevatorState UElevatorStateManagerComponent::RegisterElevatorState(const AMovingPlatform_Elevator* ElevatorActor) {
    return EElevatorState::Undefined;
}

void UElevatorStateManagerComponent::OnGameMapChangeFinished() {
}

EElevatorState UElevatorStateManagerComponent::GetElevatorState(const AMovingPlatform_Elevator* ElevatorActor) const {
    return EElevatorState::Undefined;
}

UElevatorStateManagerComponent* UElevatorStateManagerComponent::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UElevatorStateManagerComponent::ClearElevatorStates() {
}


