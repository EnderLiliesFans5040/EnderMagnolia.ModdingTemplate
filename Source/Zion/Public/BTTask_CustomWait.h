#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BTTask_CustomWait.generated.h"

UCLASS(Blueprintable)
class UBTTask_CustomWait : public UBTTask_Wait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDifficultySettings;
    
public:
    UBTTask_CustomWait();

};

