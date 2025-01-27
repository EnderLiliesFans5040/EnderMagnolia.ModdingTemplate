#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocalizationBPFLibrary.generated.h"

UCLASS(Blueprintable)
class ULocalizationBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULocalizationBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetLanguageToSystemLanguage();
    
    UFUNCTION(BlueprintCallable)
    static void SetLanguage(const FString& Language);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetAvailableLanguages();
    
};

