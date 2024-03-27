#pragma once
#include "CoreMinimal.h"
#include "Command.h"
#include "Command_AutoClimb.generated.h"

class UCurveVector;

UCLASS(Abstract, Blueprintable)
class UCommand_AutoClimb : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* LocationBlendCurve;
    
public:
    UCommand_AutoClimb();

};

