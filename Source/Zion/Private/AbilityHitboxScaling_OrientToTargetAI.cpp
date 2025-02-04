#include "AbilityHitboxScaling_OrientToTargetAI.h"
#include "OrientToTargetComponent.h"

AAbilityHitboxScaling_OrientToTargetAI::AAbilityHitboxScaling_OrientToTargetAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OrientToTargetComponent = CreateDefaultSubobject<UOrientToTargetComponent>(TEXT("OrientToTarget"));
}


