#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryBeforeSendHandler.generated.h"

class USentryEvent;
class USentryHint;

UCLASS(Blueprintable)
class SENTRY_API USentryBeforeSendHandler : public UObject {
    GENERATED_BODY()
public:
    USentryBeforeSendHandler();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USentryEvent* HandleBeforeSend(USentryEvent* Event, USentryHint* Hint);
    
};

