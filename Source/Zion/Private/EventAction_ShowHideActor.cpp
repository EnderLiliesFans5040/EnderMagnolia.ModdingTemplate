#include "EventAction_ShowHideActor.h"

UEventAction_ShowHideActor::UEventAction_ShowHideActor() {
    this->FadeTime = 0.50f;
    this->Curve = NULL;
    this->FadeParameterName = TEXT("DissolveValue");
}


