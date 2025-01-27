#include "SleepTargetComponent.h"

USleepTargetComponent::USleepTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBePutToSleep = true;
    this->Owner = NULL;
    this->MovementComponent = NULL;
    this->StateComponent = NULL;
    this->StatusEffectComponent = NULL;
    this->CommandComponent = NULL;
    this->SpineRendererComponent = NULL;
    this->SpineColorComponent = NULL;
    this->DeathComponent = NULL;
    this->KnockbackComponent = NULL;
}


