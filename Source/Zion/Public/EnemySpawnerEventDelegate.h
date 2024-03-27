#pragma once
#include "CoreMinimal.h"
#include "EnemySpawnerEventDelegate.generated.h"

class AEnemySpawner;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemySpawnerEvent, AEnemySpawner*, EnemySpawner);

