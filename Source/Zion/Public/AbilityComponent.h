#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AbilityAdditionalData.h"
#include "AbilityArray.h"
#include "AbilityData.h"
#include "Templates/SubclassOf.h"
#include "AbilityComponent.generated.h"

class AAbility;
class AAbilityInstant;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAbilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AAbility>, FAbilityArray> InstancesForClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAbility*> RunningAbilities;
    
public:
    UAbilityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AAbilityInstant* LaunchAbilityInstant(const FAbilityData& AbilityData, const TArray<AActor*>& Targets, const FAbilityAdditionalData& AdditionalData);
    
    UFUNCTION(BlueprintCallable)
    AAbility* LaunchAbility(const FAbilityData& AbilityData, const FAbilityAdditionalData& AdditionalData, const FTransform& GlobalOffset);
    
};

