#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EInputDirection.h"
#include "InputSnapshot.h"
#include "InputBPFLibrary.generated.h"

class UInputAction;

UCLASS(Blueprintable)
class UInputBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSameVerticalDirection(EInputDirection DirectionA, EInputDirection DirectionB, bool bConsiderNeutralAsSame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSameHorizontalDirection(EInputDirection DirectionA, EInputDirection DirectionB, bool bConsiderNeutralAsSame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInputActionTriggering(const FInputSnapshot& InputSnapshot, const UInputAction* InputAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInputActionJustTriggered(const FInputSnapshot& InputSnapshot, const UInputAction* InputAction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqual(const FInputSnapshot& A, const FInputSnapshot& B);
    
};

