#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MovementModeData.h"
#include "Templates/SubclassOf.h"
#include "RepulsionPlayerComponent.generated.h"

class UPrimitiveComponent;
class URepulsionEnemyComponent;
class UState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URepulsionPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableForceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoEnemyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> IgnoreRepulsionStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementModeData> IgnoreMovementModes;
    
public:
    URepulsionPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveRepulsionEnemyComponent(URepulsionEnemyComponent* RepulsionEnemyComponent, UPrimitiveComponent* Collider);
    
    UFUNCTION(BlueprintCallable)
    void AddRepulsionEnemyComponent(URepulsionEnemyComponent* RepulsionEnemyComponent, UPrimitiveComponent* Collider);
    
};

