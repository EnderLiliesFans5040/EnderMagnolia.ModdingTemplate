#include "EventAction_Talk_Actor.h"

UEventAction_Talk_Actor::UEventAction_Talk_Actor() {
    this->ActorAnchor = EWidgetActorAnchor::Bottom;
    this->bAttachToSubject = true;
    this->AnimationType = ETalkAnimationType::None;
}


