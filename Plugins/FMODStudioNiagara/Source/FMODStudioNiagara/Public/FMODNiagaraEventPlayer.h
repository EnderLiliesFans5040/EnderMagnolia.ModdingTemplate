#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "FMODNiagaraEventPlayer.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, EditInlineNew)
class FMODSTUDIONIAGARA_API UFMODNiagaraEventPlayer : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* EventToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<FName> ParameterNames;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopWhenComponentIsDestroyed;
    
    UFMODNiagaraEventPlayer();

};

