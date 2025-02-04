#pragma once
#include "CoreMinimal.h"
#include "BTTaskZion.h"
#include "ECommandFinishType.h"
#include "BTTask_Execute.generated.h"

class UCommand;

UCLASS(Abstract, Blueprintable)
class UBTTask_Execute : public UBTTaskZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireInstantUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearOnAbort;
    
public:
    UBTTask_Execute();

private:
    UFUNCTION(BlueprintCallable)
    void OnFinishCommand(const UCommand* Command, ECommandFinishType FinishType);
    
};

