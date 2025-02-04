#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryTransaction.generated.h"

class USentrySpan;

UCLASS(Blueprintable)
class SENTRY_API USentryTransaction : public UObject {
    GENERATED_BODY()
public:
    USentryTransaction();

    UFUNCTION(BlueprintCallable)
    USentrySpan* StartChild(const FString& Operation, const FString& Description);
    
    UFUNCTION(BlueprintCallable)
    void SetTag(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetData(const FString& Key, const TMap<FString, FString>& Values);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RemoveData(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
};

