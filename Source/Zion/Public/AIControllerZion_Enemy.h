#pragma once
#include "CoreMinimal.h"
#include "AIControllerZion.h"
#include "Templates/SubclassOf.h"
#include "AIControllerZion_Enemy.generated.h"

class UStatsControllerAIComponent;
class UUserWidgetEnemyUI;

UCLASS(Abstract, Blueprintable)
class AAIControllerZion_Enemy : public AAIControllerZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStatsControllerAIComponent* StatsControllerAIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetEnemyUI> EnemyUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInAmbush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidgetEnemyUI* EnemyUI;
    
public:
    AAIControllerZion_Enemy(const FObjectInitializer& ObjectInitializer);

};

