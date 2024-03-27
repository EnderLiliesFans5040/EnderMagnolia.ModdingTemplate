#pragma once
#include "CoreMinimal.h"
#include "ButtonFocusDelegateDelegate.generated.h"

class UUserWidgetButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonFocusDelegate, UUserWidgetButton*, Button);

