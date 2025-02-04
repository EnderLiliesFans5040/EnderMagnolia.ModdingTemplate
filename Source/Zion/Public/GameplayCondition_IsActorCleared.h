#pragma once
#include "CoreMinimal.h"
#include "GameplayCondition.h"
#include "GameplayCondition_IsActorCleared.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UGameplayCondition_IsActorCleared : public UGameplayCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
public:
    UGameplayCondition_IsActorCleared();

};

