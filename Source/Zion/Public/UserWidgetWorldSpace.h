#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserWidgetZionBase.h"
#include "UserWidgetWorldSpace.generated.h"

class UScaleBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetWorldSpace : public UUserWidgetZionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WorldSpacePivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* DPIScaler;
    
public:
    UUserWidgetWorldSpace();

    UFUNCTION(BlueprintCallable)
    void Show();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHide();
    
public:
    UFUNCTION(BlueprintCallable)
    void Hide();
    
};

