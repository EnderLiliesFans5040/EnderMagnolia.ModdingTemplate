#include "DifficultySettings.h"

FDifficultySettings::FDifficultySettings() {
    this->EnemyMaxHPFactor = 0.00f;
    this->EnemyAttackFactor = 0.00f;
    this->EnemyActionFrequency = 0.00f;
    this->MaxPlayerLevel = 0;
    this->bDeathPenalty = false;
    this->bPlayerOneShotKill = false;
    this->bEnemyRegenHP = false;
}

