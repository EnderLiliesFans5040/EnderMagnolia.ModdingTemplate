#pragma once
#include "CoreMinimal.h"
#include "Command.h"
#include "Command_Dodge.generated.h"

UCLASS(Abstract, Blueprintable)
class UCommand_Dodge : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetMovementSpeedFastOnFinish;
    
public:
    UCommand_Dodge();

};

