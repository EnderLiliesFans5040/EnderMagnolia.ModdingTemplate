#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpineFXData.h"
#include "niagaraBPFLibrary.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class UniagaraBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UniagaraBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static void TryReleaseToPool(UNiagaraComponent* NiagaraComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FSpineFXData& FXData);
    
};

