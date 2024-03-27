#include "AbilityEffect.h"

UAbilityEffect::UAbilityEffect() {
    this->bEnabled = true;
    this->bExecuteWhenDodged = false;
    this->bExecuteWhenGuarded = false;
    this->bExecuteWhenParried = false;
}


bool UAbilityEffect::IsFrontalAbility() const {
    return false;
}

FVector UAbilityEffect::GetToTargetDirection(EDirectionSource DirectionSource, const FVector& Axis) const {
    return FVector{};
}

FVector UAbilityEffect::GetTargetLocation() const {
    return FVector{};
}

FVector UAbilityEffect::GetTargetForward() const {
    return FVector{};
}

AActor* UAbilityEffect::GetTarget() const {
    return NULL;
}

FVector UAbilityEffect::GetSourceLocation() const {
    return FVector{};
}

AActor* UAbilityEffect::GetSource() const {
    return NULL;
}

FVector UAbilityEffect::GetAbilityLocation() const {
    return FVector{};
}

FVector UAbilityEffect::GetAbilityForward() const {
    return FVector{};
}


