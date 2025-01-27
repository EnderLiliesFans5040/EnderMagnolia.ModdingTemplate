#pragma once
#include "CoreMinimal.h"
#include "AuraFXRuntimeData.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FAuraFXRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* NiagaraComponent;
    
    ZION_API FAuraFXRuntimeData();
};

