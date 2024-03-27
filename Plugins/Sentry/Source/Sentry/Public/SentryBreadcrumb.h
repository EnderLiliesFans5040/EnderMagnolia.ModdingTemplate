#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESentryLevel.h"
#include "SentryBreadcrumb.generated.h"

UCLASS(Blueprintable)
class SENTRY_API USentryBreadcrumb : public UObject {
    GENERATED_BODY()
public:
    USentryBreadcrumb();

    UFUNCTION(BlueprintCallable)
    void SetType(const FString& Type);
    
    UFUNCTION(BlueprintCallable)
    void SetMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const TMap<FString, FString>& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetCategory(const FString& Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentryLevel GetLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCategory() const;
    
};

