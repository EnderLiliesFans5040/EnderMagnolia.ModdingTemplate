#pragma once
#include "CoreMinimal.h"
#include "UserWidgetWorldSpace.h"
#include "UserWidgetWorldSpaceText.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetWorldSpaceText : public UUserWidgetWorldSpace {
    GENERATED_BODY()
public:
    UUserWidgetWorldSpaceText();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetText(const FText& Text);
    
};

