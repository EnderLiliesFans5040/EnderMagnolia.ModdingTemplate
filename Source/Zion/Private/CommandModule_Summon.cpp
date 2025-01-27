#include "CommandModule_Summon.h"

UCommandModule_Summon::UCommandModule_Summon() {
    this->SpiritClass = NULL;
    this->OnFinishDismissType = EDismissType::None;
    this->DismissDelay = 0.00f;
}

ACharacterZionSpirit* UCommandModule_Summon::GetSpirit() const {
    return NULL;
}


