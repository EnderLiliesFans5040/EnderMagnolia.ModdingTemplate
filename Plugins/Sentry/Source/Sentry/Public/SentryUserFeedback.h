#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryUserFeedback.generated.h"

class USentryId;

UCLASS(Blueprintable)
class SENTRY_API USentryUserFeedback : public UObject {
    GENERATED_BODY()
public:
    USentryUserFeedback();

    UFUNCTION(BlueprintCallable)
    void SetName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetEmail(const FString& Email);
    
    UFUNCTION(BlueprintCallable)
    void SetComment(const FString& Comments);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(USentryId* EventId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEmail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetComment() const;
    
};

