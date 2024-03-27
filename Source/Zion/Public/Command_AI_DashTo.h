#pragma once
#include "CoreMinimal.h"
#include "Command.h"
#include "DashToData.h"
#include "Command_AI_DashTo.generated.h"

UCLASS(Abstract, Blueprintable)
class UCommand_AI_DashTo : public UCommand {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashToData DashForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDashToData DashBackward;
    
public:
    UCommand_AI_DashTo();

};

