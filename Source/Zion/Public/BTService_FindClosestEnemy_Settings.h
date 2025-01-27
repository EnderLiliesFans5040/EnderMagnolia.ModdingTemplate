#pragma once
#include "CoreMinimal.h"
#include "BTService_FindClosestEnemy.h"
#include "FindClosestEnemySettings.h"
#include "BTService_FindClosestEnemy_Settings.generated.h"

UCLASS(Blueprintable)
class UBTService_FindClosestEnemy_Settings : public UBTService_FindClosestEnemy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindClosestEnemySettings Settings;
    
public:
    UBTService_FindClosestEnemy_Settings();

};

