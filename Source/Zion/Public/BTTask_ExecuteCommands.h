#pragma once
#include "CoreMinimal.h"
#include "BTTask_Execute.h"
#include "Templates/SubclassOf.h"
#include "BTTask_ExecuteCommands.generated.h"

class UCommand;

UCLASS(Blueprintable)
class UBTTask_ExecuteCommands : public UBTTask_Execute {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommand>> CommandClasses;
    
public:
    UBTTask_ExecuteCommands();

};

