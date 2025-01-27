#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EConditionDestroyMode.h"
#include "GameplayConditionChecker.h"
#include "ConditionalDestroyComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UConditionalDestroyComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionDestroyMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AdditionalActors;
    
public:
    UConditionalDestroyComponent(const FObjectInitializer& ObjectInitializer);

};

