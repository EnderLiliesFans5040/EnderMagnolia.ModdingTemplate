#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpineFXData.h"
#include "niagaraBPFLibrary.generated.h"

UCLASS(Blueprintable)
class UniagaraBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UniagaraBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FSpineFXData& FXData);
    
};

