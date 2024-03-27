#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "Templates/SubclassOf.h"
#include "EventAction_SaveGame.generated.h"

class UUserWidgetZionShowHide;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SaveGame : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsyncSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetZionShowHide> SaveWidgetClass;
    
public:
    UEventAction_SaveGame();

private:
    UFUNCTION(BlueprintCallable)
    void OnSaveFinished(bool bResult);
    
};

