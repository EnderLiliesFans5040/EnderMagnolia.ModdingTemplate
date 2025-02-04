#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponentList.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FNiagaraComponentList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> List;
    
    ZION_API FNiagaraComponentList();
};

