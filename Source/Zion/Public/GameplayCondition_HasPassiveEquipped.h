#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayCondition.h"
#include "GameplayCondition_HasPassiveEquipped.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameplayCondition_HasPassiveEquipped : public UGameplayCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Passive;
    
public:
    UGameplayCondition_HasPassiveEquipped();

};

