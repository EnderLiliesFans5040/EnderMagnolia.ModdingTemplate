#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_SetFacingFromInput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_SetFacingFromInput : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckLockFacing;
    
public:
    UCommandModule_SetFacingFromInput();

};

