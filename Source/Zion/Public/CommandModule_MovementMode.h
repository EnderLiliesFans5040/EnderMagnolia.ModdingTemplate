#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "MovementModeData.h"
#include "CommandModule_MovementMode.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_MovementMode : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementModeData MovementMode;
    
public:
    UCommandModule_MovementMode();

};

