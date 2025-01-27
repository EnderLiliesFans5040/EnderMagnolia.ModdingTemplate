#include "DifficultySettings.h"

FDifficultySettings::FDifficultySettings() {
    this->EnemyMaxHPFactor = 0.00f;
    this->EnemyAttackFactor = 0.00f;
    this->EnemyActionFrequency = 0.00f;
    this->EnemyStaminaFactor = 0.00f;
    this->EnemyStaminaRecoverySpeedFactor = 0.00f;
    this->bPlayerOneShotKill = false;
    this->bPlayerNoHeal = false;
    this->bEnemyNoLeadFX = false;
}

