#pragma once
#include "CoreMinimal.h"
#include "FieldMessageData.h"
#include "GameplayConditionChecker.h"
#include "ConditionedFieldMessageData.generated.h"

USTRUCT(BlueprintType)
struct FConditionedFieldMessageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker ConditionChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFieldMessageData> Messages;
    
    ZION_API FConditionedFieldMessageData();
};

