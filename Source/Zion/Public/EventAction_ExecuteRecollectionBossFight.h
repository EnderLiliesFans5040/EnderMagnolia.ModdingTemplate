#pragma once
#include "CoreMinimal.h"
#include "EventAction.h"
#include "EventAction_ExecuteRecollectionBossFight.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_ExecuteRecollectionBossFight : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IsBossRushKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RecollectionBossDataKey;
    
public:
    UEventAction_ExecuteRecollectionBossFight();

};

