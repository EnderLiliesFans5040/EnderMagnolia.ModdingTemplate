#pragma once
#include "CoreMinimal.h"
#include "UserWidgetWorldSpaceText.h"
#include "UserWidgetWorldSpaceText_Interact.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetWorldSpaceText_Interact : public UUserWidgetWorldSpaceText {
    GENERATED_BODY()
public:
    UUserWidgetWorldSpaceText_Interact();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAvailable(bool bAvailable);
    
};

