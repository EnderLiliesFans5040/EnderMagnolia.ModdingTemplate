#pragma once
#include "CoreMinimal.h"
#include "SpineFXData.h"
#include "CommandModule.h"
#include "CommandModule_TriggerLeadFx.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_TriggerLeadFx : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLeadFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData OverrideLeadFX;
    
public:
    UCommandModule_TriggerLeadFx();

};

