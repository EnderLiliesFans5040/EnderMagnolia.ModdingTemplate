#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentrySpan.generated.h"

UCLASS(Blueprintable)
class SENTRY_API USentrySpan : public UObject {
    GENERATED_BODY()
public:
    USentrySpan();

    UFUNCTION(BlueprintCallable)
    void SetTag(const FString& Key, const FString& Value);
    
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

