#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidgetCursor.generated.h"

class UScaleBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetCursor : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* DPIScaler;
    
public:
    UUserWidgetCursor();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisible(bool bVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCursorVisibilityChanged();
    
};

