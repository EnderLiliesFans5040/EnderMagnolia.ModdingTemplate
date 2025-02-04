#include "AbilityHitboxTarget_Search.h"

AAbilityHitboxTarget_Search::AAbilityHitboxTarget_Search(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistance = 1000.00f;
    this->bNeedsLineOfSight = false;
    this->bFrontCheck = false;
    this->VisibilityChannel = ECC_Visibility;
}


