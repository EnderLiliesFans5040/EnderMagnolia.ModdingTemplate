#include "FieldMessageComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetComponent.h"

UFieldMessageComponent::UFieldMessageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Space = EWidgetSpace::Screen;
    this->TickMode = ETickMode::Disabled;
    this->MessageData = NULL;
}

void UFieldMessageComponent::SetMessageData(UFieldMessageAsset* MessageDataAsset) {
}

void UFieldMessageComponent::OnMessageCompleted() {
}

bool UFieldMessageComponent::LaunchFieldMessage(AActor* InTargetActor) {
    return false;
}

bool UFieldMessageComponent::IsProcessingFieldMessage() const {
    return false;
}

UFieldMessageAsset* UFieldMessageComponent::GetFieldMessageAsset() const {
    return NULL;
}

void UFieldMessageComponent::Abort() {
}


