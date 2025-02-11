#pragma once
#include "CoreMinimal.h"
#include "UserWidgetZion.h"
#include "UserWidgetZionShowHide.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetZionShowHide : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UUserWidgetZionShowHide();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show(bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideAndRemoveFromParent(bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide(bool bInstant);
    
};

