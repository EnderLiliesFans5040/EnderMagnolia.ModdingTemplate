#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_DeactivateAuraFXs.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_DeactivateAuraFXs : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AuraFXTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeactivationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnsureDeactivation;
    
public:
    UCommandModule_DeactivateAuraFXs();

};

