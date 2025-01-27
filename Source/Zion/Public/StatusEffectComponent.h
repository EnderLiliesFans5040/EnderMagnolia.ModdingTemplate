#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EStatusEffectType.h"
#include "LaunchStatusEffectDelegateDelegate.h"
#include "StatusEffectList.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UStatusEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchStatusEffectDelegate OnStatusEffectLaunchedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLaunchStatusEffectDelegate OnStatusEffectStoppedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffectBurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffectFreeze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStatusEffect> StatusEffectShock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStatusEffect*> StatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UStatusEffect>, FStatusEffectList> CachedStatusEffects;
    
public:
    UStatusEffectComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDeathProcessStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchStatusEffectFromClass(const TSubclassOf<UStatusEffect>& StatusEffectClass);
    
    UFUNCTION(BlueprintCallable)
    void LaunchStatusEffect(EStatusEffectType StatusEffectType);
    
};

