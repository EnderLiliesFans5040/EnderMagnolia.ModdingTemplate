#pragma once
#include "CoreMinimal.h"
#include "EConditionOperator.h"
#include "GameplayConditionChecker.generated.h"

class UGameplayCondition;

USTRUCT(BlueprintType)
struct FGameplayConditionChecker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGameplayCondition*> GameplayConditions;
    
    ZION_API FGameplayConditionChecker();
};

