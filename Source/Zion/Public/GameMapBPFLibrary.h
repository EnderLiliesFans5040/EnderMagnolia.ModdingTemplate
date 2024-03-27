#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameMapBPFLibrary.generated.h"

UCLASS(Blueprintable)
class UGameMapBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameMapBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector WorldToPixelLocation(const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPixelPerMeter();
    
};

