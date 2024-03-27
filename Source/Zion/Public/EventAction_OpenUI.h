#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "Templates/SubclassOf.h"
#include "EventAction_OpenUI.generated.h"

class UUserWidgetZion;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_OpenUI : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetZion> UserWidgetClass;
    
public:
    UEventAction_OpenUI();

private:
    UFUNCTION(BlueprintCallable)
    void OnWidgetDestruct();
    
};

