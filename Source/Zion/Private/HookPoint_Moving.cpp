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
    this->bShouldStopWhenCharacterLeaves = true;
    this->bCanBeUsedAtSplineEnd = true;
    this->bCanBeCalledAtSplineStart = true;
    this->bCanBeCalledAtSplineEnd = true;
    this->SplineComponent->SetupAttachment(RootComponent);
    this->CallToStartTrigger->SetupAttachment(RootComponent);
    this->CallToEndTrigger->SetupAttachment(RootComponent);
}

void AHookPoint_Moving::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void AHookPoint_Moving::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


