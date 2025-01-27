#include "EventSkipAction.h"

UEventSkipAction::UEventSkipAction() {
}

void UEventSkipAction::TeleportPlayerPawnToBinding(FName TargetBinding, bool bOffsetByHalfHeight) {
}

void UEventSkipAction::TeleportActorToTransform(AActor* Actor, FTransform Transform, bool bOffsetByHalfHeight) {
}

void UEventSkipAction::TeleportActorBindingToTransform(FName Binding, const FTransform& Transform, bool bOffsetByHalfHeight) {
}

void UEventSkipAction::TeleportActorBindingToBinding(FName Binding, FName TargetBinding, bool bOffsetByHalfHeight) {
}


UEventContext* UEventSkipAction::GetContext() const {
    return NULL;
}


