#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectArray.h"
#include "PoolSystemComponent.generated.h"

class UObject;
class UPoolSystemComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UPoolSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FObjectArray> CachedInstances;
    
public:
    UPoolSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPoolSystemComponent* Get(const UObject* WorldContextObject);
    
};

