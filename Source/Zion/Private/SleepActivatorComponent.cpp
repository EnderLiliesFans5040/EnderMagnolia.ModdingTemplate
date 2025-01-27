#include "SleepActivatorComponent.h"

USleepActivatorComponent::USleepActivatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WakeTriggerMinRadius = 2000.00f;
    this->WakeTriggerMaxRadius = 8000.00f;
}

void USleepActivatorComponent::OnWakeTriggerOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USleepActivatorComponent::OnWakeTriggerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


