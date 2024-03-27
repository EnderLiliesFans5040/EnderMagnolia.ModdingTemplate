#pragma once
#include "CoreMinimal.h"
#include "Command.h"
#include "Command_Jump.generated.h"

UCLASS(Abstract, Blueprintable)
class UCommand_Jump : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinJumpHoldTime;
    
public:
    UCommand_Jump();

};

