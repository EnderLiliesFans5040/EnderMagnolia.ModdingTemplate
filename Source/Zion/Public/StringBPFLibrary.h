#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StringBPFLibrary.generated.h"

UCLASS(Blueprintable)
class UStringBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStringBPFLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString TimeSecondsToString(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> Sort(UPARAM(Ref) TArray<FString>& Array);
    
    UFUNCTION(BlueprintCallable)
    static void ProcessSubtitle(const FText& Text, FText& Name, FText& Message);
    
};

