#pragma once
#include "CoreMinimal.h"
#include "UserWidgetWorldSpace.h"
#include "UserWidgetWorldSpace_InputEvent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetWorldSpace_InputEvent : public UUserWidgetWorldSpace {
    GENERATED_BODY()
public:
    UUserWidgetWorldSpace_InputEvent();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressConfirm();
    
};

