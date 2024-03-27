#include "GameModeZionBase.h"
#include "InputDeviceCheckerComponent.h"

AGameModeZionBase::AGameModeZionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputDeviceCheckerComponent = CreateDefaultSubobject<UInputDeviceCheckerComponent>(TEXT("InputDeviceChecker"));
    this->LocalizationSwitcherComponent = NULL;
}


