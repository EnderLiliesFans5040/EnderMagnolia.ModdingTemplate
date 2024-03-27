#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "KnockbackData.h"
#include "BTTask_SelfKnockback.generated.h"

UCLASS(Blueprintable)
class UBTTask_SelfKnockback : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnockbackData KnockbackData;
    
public:
    UBTTask_SelfKnockback();

};

