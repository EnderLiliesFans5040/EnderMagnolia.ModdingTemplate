#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HookTargetEnemyComponent.generated.h"

class UEnemyHookPointSceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZION_API UHookTargetEnemyComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnemyHookPointSceneComponent*> EnemyHookPoints;
    
public:
    UHookTargetEnemyComponent(const FObjectInitializer& ObjectInitializer);

};

