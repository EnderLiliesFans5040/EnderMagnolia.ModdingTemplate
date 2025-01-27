#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECommonOperator.h"
#include "GameplayCondition.h"
#include "GameplayCondition_StoryLevel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameplayCondition_StoryLevel : public UGameplayCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle StoryLevel;
    
public:
    UGameplayCondition_StoryLevel();

};

