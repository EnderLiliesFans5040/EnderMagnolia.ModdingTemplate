#include "NotificationComponent.h"

UNotificationComponent::UNotificationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DelayBetweenNotifications = 1.00f;
    this->NotificationDuration = 3.00f;
    this->NotificationMap = NULL;
}

void UNotificationComponent::OnPawnDeath() {
}

void UNotificationComponent::OnNotificationDurationFinished() {
}

void UNotificationComponent::OnNotificationDelayFinished() {
}

void UNotificationComponent::OnItemAdded(const UInventory* Inventory, const FName& ItemId, int32 AddedCount) {
}

bool UNotificationComponent::CanStartNotification() const {
    return false;
}


