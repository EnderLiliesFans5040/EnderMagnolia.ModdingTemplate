#pragma once
#include "CoreMinimal.h"
#include "GameplayCondition.h"
#include "GameplayCondition_HasClearedEvent.generated.h"

class UEventAsset;

UCLASS(Blueprintable, EditInlineNew)
class UGameplayCondition_HasClearedEvent : public UGameplayCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEventAsset> Event;
    
public:
    UGameplayCondition_HasClearedEvent();

};

