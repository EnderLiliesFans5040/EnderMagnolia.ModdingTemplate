#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_ActivateAuraFXs.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_ActivateAuraFXs : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AuraFXTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnsureActivation;
    
public:
    UCommandModule_ActivateAuraFXs();

};

