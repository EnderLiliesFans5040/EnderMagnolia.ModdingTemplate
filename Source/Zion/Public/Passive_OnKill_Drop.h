#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Passive_OnKill.h"
#include "Passive_OnKill_Drop.generated.h"

UCLASS(Abstract, Blueprintable)
class UPassive_OnKill_Drop : public UPassive_OnKill {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DropHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropPercentage;
    
public:
    UPassive_OnKill_Drop();

};

