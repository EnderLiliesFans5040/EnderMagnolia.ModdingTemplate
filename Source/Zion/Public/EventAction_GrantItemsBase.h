#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "Templates/SubclassOf.h"
#include "EventAction_GrantItemsBase.generated.h"

class UUserWidgetItemGet;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UEventAction_GrantItemsBase : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetItemGet> UserWidgetClass;
    
public:
    UEventAction_GrantItemsBase();

private:
    UFUNCTION(BlueprintCallable)
    void OnWidgetDestruct();
    
};

