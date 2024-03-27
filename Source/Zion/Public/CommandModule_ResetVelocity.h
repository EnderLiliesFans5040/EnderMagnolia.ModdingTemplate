#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_ResetVelocity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_ResetVelocity : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetVelocityX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetVelocityY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetVelocityZ;
    
public:
    UCommandModule_ResetVelocity();

};

