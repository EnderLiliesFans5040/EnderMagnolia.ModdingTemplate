#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CommandCondition.h"
#include "CommandCondition_PassiveEquipped.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandCondition_PassiveEquipped : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PassiveHandle;
    
public:
    UCommandCondition_PassiveEquipped();

};

