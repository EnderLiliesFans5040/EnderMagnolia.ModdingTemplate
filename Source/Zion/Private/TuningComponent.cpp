#include "TuningComponent.h"

UTuningComponent::UTuningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 1000.00f;
    this->WorldSpaceTargetClass = NULL;
    this->TuningTargetDetector = NULL;
    this->TargetWidgetHolder = NULL;
}

void UTuningComponent::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTuningComponent::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


