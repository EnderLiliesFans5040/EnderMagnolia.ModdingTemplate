#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_SaveGame.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SaveGame : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAsyncSave;
    
public:
    UEventAction_SaveGame();

private:
    UFUNCTION(BlueprintCallable)
    void OnSaveFinished(bool bResult);
    
};

