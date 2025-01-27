#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EventBPFLibrary.generated.h"

class AActor;
class ASpawner;

UCLASS(Blueprintable)
class UEventBPFLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEventBPFLibrary();

    UFUNCTION(BlueprintCallable)
    static TMap<FName, AActor*> GenerateActorBindingsFromSpawners(const TMap<FName, ASpawner*>& SpawnerBindings);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FName, AActor*> GenerateActorBindings(const TMap<FName, AActor*>& ActorBindings, const TMap<FName, ASpawner*>& SpawnerBindings);
    
    UFUNCTION(BlueprintCallable)
    static void AppendActorBindings(UPARAM(Ref) TMap<FName, AActor*>& ActorBindings, const TMap<FName, AActor*>& AdditionalBindings);
    
};

