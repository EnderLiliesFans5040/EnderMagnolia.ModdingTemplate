#include "AchievementsSubsystem.h"

UAchievementsSubsystem::UAchievementsSubsystem() {
}

bool UAchievementsSubsystem::IsUsingInternalAchievements() const {
    return false;
}

bool UAchievementsSubsystem::IsAchievementUnlocked(EZionAchievement Achievement) const {
    return false;
}

void UAchievementsSubsystem::InitializeForMainUser() {
}


