#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryTransactionContext.generated.h"

UCLASS(Blueprintable)
class SENTRY_API USentryTransactionContext : public UObject {
    GENERATED_BODY()
public:
    USentryTransactionContext();

    UFUNCTION(BlueprintCallable)
    void Initialize(const FString& Name, const FString& Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOperation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
};

