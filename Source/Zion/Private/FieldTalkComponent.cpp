#include "FieldTalkComponent.h"

UFieldTalkComponent::UFieldTalkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedFieldTalkAsset = NULL;
}

bool UFieldTalkComponent::StartFieldTalk(UFieldTalkAsset* FieldTalkAsset, bool bSkipActiveFieldTalkAsset) {
    return false;
}

void UFieldTalkComponent::ShowFieldTalkEntry() {
}

void UFieldTalkComponent::OnPawnDeath() {
}

bool UFieldTalkComponent::CanStartFieldTalk() const {
    return false;
}


