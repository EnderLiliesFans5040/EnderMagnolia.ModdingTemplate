#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DeathEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "DeathComponent.generated.h"

class UDeathProcess;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDeathComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathEvent OnDeathProcessStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathEvent OnDeathProcessEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDeathProcess> DeathProcessClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDeathProcess* DeathProcess;
    
public:
    UDeathComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnHPReachedZero();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
};

