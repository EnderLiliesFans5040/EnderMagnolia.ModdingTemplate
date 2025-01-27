#include "UserWidgetMapIcon_Actor.h"

UUserWidgetMapIcon_Actor::UUserWidgetMapIcon_Actor() {
    this->bOverrideCachedWidgetSize = false;
    this->bOverrideClearFogOfWarSize = false;
}

void UUserWidgetMapIcon_Actor::SetActorData(const FClearActorData& InActorData) {
}

FClearActorData UUserWidgetMapIcon_Actor::GetActorData() const {
    return FClearActorData{};
}


