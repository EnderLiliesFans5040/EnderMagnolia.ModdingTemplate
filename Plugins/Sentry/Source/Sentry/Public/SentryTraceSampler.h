#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryTraceSampler.generated.h"

class USentrySamplingContext;

UCLASS(Blueprintable)
class SENTRY_API USentryTraceSampler : public UObject {
    GENERATED_BODY()
public:
    USentryTraceSampler();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Sample(USentrySamplingContext* samplingContext, float& samplingValue);
    
};

