#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NameSet.h"
#include "RenderStateManagerComponent.generated.h"

class UObject;
class URenderStateComponent;
class URenderStateManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class URenderStateManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> SeenActors;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<URenderStateComponent>> RenderStateComponents;
    
public:
    URenderStateManagerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnGameMapChangeStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnGameMapChangeFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URenderStateManagerComponent* Get(const UObject* WorldContextObject);
    
};

