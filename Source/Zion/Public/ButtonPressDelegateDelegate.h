#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "ButtonPressDelegateDelegate.generated.h"

class UUserWidgetButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FButtonPressDelegate, const FKeyEvent&, KeyEvent, UUserWidgetButton*, Button);

