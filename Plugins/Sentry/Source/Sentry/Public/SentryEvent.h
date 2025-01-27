#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESentryLevel.h"
#include "SentryEvent.generated.h"

class USentryEvent;

UCLASS(Blueprintable)
class SENTRY_API USentryEvent : public UObject {
    GENERATED_BODY()
public:
    USentryEvent();

    UFUNCTION(BlueprintCallable)
    void SetMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void SetLevel(ESentryLevel Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESentryLevel GetLevel() const;
    
    UFUNCTION(BlueprintCallable)
    static USentryEvent* CreateEventWithMessageAndLevel(const FString& Message, ESentryLevel Level);
    
};

