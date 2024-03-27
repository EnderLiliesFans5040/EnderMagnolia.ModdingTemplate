#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryHint.generated.h"

class USentryAttachment;

UCLASS(Blueprintable)
class SENTRY_API USentryHint : public UObject {
    GENERATED_BODY()
public:
    USentryHint();

    UFUNCTION(BlueprintCallable)
    void AddAttachment(USentryAttachment* Attachment);
    
};

