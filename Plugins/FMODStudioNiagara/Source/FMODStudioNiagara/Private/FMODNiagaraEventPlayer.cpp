#include "FMODNiagaraEventPlayer.h"

UFMODNiagaraEventPlayer::UFMODNiagaraEventPlayer() {
    this->EventToPlay = NULL;
    this->bLimitPlaysPerTick = true;
    this->MaxPlaysPerTick = 10;
    this->bStopWhenComponentIsDestroyed = true;
}


