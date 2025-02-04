#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EZionAchievement.h"
#include "AchievementsSubsystem.generated.h"

UCLASS(Blueprintable)
class UAchievementsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UAchievementsSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingInternalAchievements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAchievementUnlocked(EZionAchievement Achievement) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeForMainUser();
    
};

