#pragma once
#include "CoreMinimal.h"
#include "RuntimeCheckpointData.h"
#include "Trigger.h"
#include "Trigger_RegisterRuntimeCheckpoint.generated.h"

class AActor;
class UChildActorComponent;

UCLASS(Blueprintable)
class ATrigger_RegisterRuntimeCheckpoint : public ATrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* PlayerStartChildActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeCheckpointData RuntimeCheckpointData;
    
public:
    ATrigger_RegisterRuntimeCheckpoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEndOverlap(AActor* PlayerActor);
    
};

