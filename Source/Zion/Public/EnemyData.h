#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AIData.h"
#include "EnemyData.generated.h"

class AAIControllerZion_Enemy;
class ACharacterZion;
class UDataTable;

USTRUCT(BlueprintType)
struct FEnemyData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACharacterZion> CharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAIControllerZion_Enemy> AIControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LevelTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIData AIData;
    
    ZION_API FEnemyData();
};

