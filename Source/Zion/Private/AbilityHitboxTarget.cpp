#include "AbilityHitboxTarget.h"

AAbilityHitboxTarget::AAbilityHitboxTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

AActor* AAbilityHitboxTarget::GetTarget_Implementation() const {
    return NULL;
}


