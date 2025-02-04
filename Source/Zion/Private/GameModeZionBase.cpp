#include "GameModeZionBase.h"
#include "InputDeviceCheckerComponent.h"
#include "PlayerControllerZionBase.h"

AGameModeZionBase::AGameModeZionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = APlayerControllerZionBase::StaticClass();
    this->InputDeviceCheckerComponent = CreateDefaultSubobject<UInputDeviceCheckerComponent>(TEXT("InputDeviceChecker"));
    this->LocalizationSwitcherComponent = NULL;
}


