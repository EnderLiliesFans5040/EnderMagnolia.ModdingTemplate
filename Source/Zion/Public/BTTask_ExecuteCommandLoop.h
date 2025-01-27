#pragma once
#include "CoreMinimal.h"
#include "BTTask_Execute.h"
#include "Templates/SubclassOf.h"
#include "BTTask_ExecuteCommandLoop.generated.h"

class UCommand;

UCLASS(Blueprintable)
class UBTTask_ExecuteCommandLoop : public UBTTask_Execute {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> StartCommandClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> LoopCommandClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> CommandClasses;
    
public:
    UBTTask_ExecuteCommandLoop();

};

