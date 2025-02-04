#include "HookPoint_Moving.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"
#include "EHookType.h"
#include "FollowSplineComponent.h"

AHookPoint_Moving::AHookPoint_Moving(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HookType = EHookType::Attach;
    this->FollowSplineComponent = CreateDefaultSubobject<UFollowSplineComponent>(TEXT("FollowSplineComponent"));
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->CallToStartTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("CallToStartTrigger"));
    this->CallToEndTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("CallToEndTrigger"));
    this->StartMovementFMODEvent = NULL;
    this->LoopMovementFMODEvent = NULL;
    this->StopMovementFMODEvent = NULL;
    this->bShouldStopWhenCharacterLeaves = true;
    this->bCanBeUsedAtSplineEnd = true;
    this->bCanBeCalledAtSplineStart = true;
    this->bCanBeCalledAtSplineEnd = true;
    this->CameraShake = NULL;
    this->InnerRadius = 0.00f;
    this->OuterRadius = 100000.00f;
    this->Falloff = 0.00f;
    this->bOrientShakeTowardsEpicenter = false;
    this->ForceFeedbackEffect = NULL;
    this->CallToEndTrigger->SetupAttachment(RootComponent);
    this->CallToStartTrigger->SetupAttachment(RootComponent);
    this->SplineComponent->SetupAttachment(RootComponent);
}

void AHookPoint_Moving::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void AHookPoint_Moving::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


