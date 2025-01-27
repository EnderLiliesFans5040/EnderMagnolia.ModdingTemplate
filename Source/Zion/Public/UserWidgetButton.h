#pragma once
#include "CoreMinimal.h"
#include "ButtonFocusDelegateDelegate.h"
#include "ButtonPressDelegateDelegate.h"
#include "UserWidgetZion.h"
#include "UserWidgetButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class UUserWidgetButton : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonFocusDelegate OnFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonPressDelegate OnPressedConfirm;
    
    UUserWidgetButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusStateChanged(bool bFocused);
    
};

