#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EnemyHookPointSceneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZION_API UEnemyHookPointSceneComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEnemyHookPointSceneComponent(const FObjectInitializer& ObjectInitializer);

};

