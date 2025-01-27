#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EventAction.h"
#include "EventAction_SetRespawnPointData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetRespawnPointData : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RespawnRestPointData;
    
public:
    UEventAction_SetRespawnPointData();

};

