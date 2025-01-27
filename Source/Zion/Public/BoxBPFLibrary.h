#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BoxBPFLibrary.generated.h"

UCLASS(Blueprintable)
class UBoxBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBoxBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FBox& Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetCenter(const FBox& Box);
    
};

