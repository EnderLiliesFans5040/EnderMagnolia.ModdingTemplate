#include "StatBreakableData.h"

FStatBreakableData::FStatBreakableData() {
    this->MaxValue = 0;
    this->DelayBeforeRecovery = 0.00f;
    this->RecoveryPerSecond = 0.00f;
    this->BrokenDuration = 0.00f;
    this->PostBreakInvincibilityTime = 0.00f;
}

