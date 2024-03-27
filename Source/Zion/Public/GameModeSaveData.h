#pragma once
#include "CoreMinimal.h"
#include "ClearManagerSaveData.h"
#include "DifficultySystemSaveData.h"
#include "GameStatsSaveData.h"
#include "RecollectionBossRushSaveData.h"
#include "RenderStateManagerSaveData.h"
#include "GameModeSaveData.generated.h"

USTRUCT(BlueprintType)
struct FGameModeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnvironmentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> EnvironmentLevelForGameMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStatsSaveData GameStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClearManagerSaveData ClearManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderStateManagerSaveData RenderStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultySystemSaveData DifficultySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecollectionBossRushSaveData BossRush;
    
    ZION_API FGameModeSaveData();
};

