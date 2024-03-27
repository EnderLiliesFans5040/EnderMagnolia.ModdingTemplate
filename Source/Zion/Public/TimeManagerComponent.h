#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimeManagerComponent.generated.h"

class UObject;
class UTimeManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTimeManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTimeManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveDilation(const FName& Tag);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTimeDilation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimeDilationActive(const FName& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTimeManagerComponent* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddDilation(float TimeDilationOverride, const FName& Tag);
    
};

