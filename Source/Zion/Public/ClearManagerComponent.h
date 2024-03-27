#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NameSet.h"
#include "ClearManagerComponent.generated.h"

class UClearComponent;
class UClearManagerComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UClearManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> ClearedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> ClearedSavedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClearComponent*> DeferredMarkAsClears;
    
public:
    UClearManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetClearedObjects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UClearManagerComponent* Get(const UObject* WorldContextObject);
    
};

