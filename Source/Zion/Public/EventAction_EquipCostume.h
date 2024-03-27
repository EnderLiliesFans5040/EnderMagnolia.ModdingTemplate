#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EventAction.h"
#include "EventAction_EquipCostume.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_EquipCostume : public UEventAction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoGrantCostume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CostumeHandle;
    
public:
    UEventAction_EquipCostume();

};

