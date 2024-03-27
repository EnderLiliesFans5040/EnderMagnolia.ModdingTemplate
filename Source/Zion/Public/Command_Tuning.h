#pragma once
#include "CoreMinimal.h"
#include "Command.h"
#include "Command_Tuning.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class UCommand_Tuning : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TuningPerSecond;
    
public:
    UCommand_Tuning();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
};

