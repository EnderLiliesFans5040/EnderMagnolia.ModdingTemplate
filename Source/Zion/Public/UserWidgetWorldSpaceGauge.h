#pragma once
#include "CoreMinimal.h"
#include "UserWidgetWorldSpace.h"
#include "UserWidgetWorldSpaceGauge.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetWorldSpaceGauge : public UUserWidgetWorldSpace {
    GENERATED_BODY()
public:
    UUserWidgetWorldSpaceGauge();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTargetActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCurrentRatio(float CurrentRatio);
    
};

