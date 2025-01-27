#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryId.generated.h"

UCLASS(Blueprintable)
class SENTRY_API USentryId : public UObject {
    GENERATED_BODY()
public:
    USentryId();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToString() const;
    
};

