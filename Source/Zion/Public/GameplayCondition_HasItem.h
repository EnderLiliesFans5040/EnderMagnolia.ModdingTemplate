#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayCondition.h"
#include "GameplayCondition_HasItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameplayCondition_HasItem : public UGameplayCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle Item;
    
public:
    UGameplayCondition_HasItem();

};

