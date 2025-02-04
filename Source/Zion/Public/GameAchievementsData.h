#pragma once
#include "CoreMinimal.h"
#include "GameAchievementsData.generated.h"

USTRUCT(BlueprintType)
struct FGameAchievementsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> GameAchievements;
    
    ZION_API FGameAchievementsData();
};

