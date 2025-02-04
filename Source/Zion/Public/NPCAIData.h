#pragma once
#include "CoreMinimal.h"
#include "NPCAIData.generated.h"

class UBehaviorTree;
class UBlackboardData;

USTRUCT(BlueprintType)
struct FNPCAIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlackboardData> BlackboardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBehaviorTree> BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolRange;
    
    ZION_API FNPCAIData();
};

