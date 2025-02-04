#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentrySamplingContext.generated.h"

class USentryTransactionContext;

UCLASS(Blueprintable)
class SENTRY_API USentrySamplingContext : public UObject {
    GENERATED_BODY()
public:
    USentrySamplingContext();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USentryTransactionContext* GetTransactionContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetCustomSamplingContext() const;
    
};

