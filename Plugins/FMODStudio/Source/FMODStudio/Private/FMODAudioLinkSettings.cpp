#include "FMODAudioLinkSettings.h"

UFMODAudioLinkSettings::UFMODAudioLinkSettings() {
    this->bShouldClearBufferOnReceipt = true;
    this->ProducerToConsumerBufferRatio = 2.00f;
    this->InitialSilenceFillRatio = 1.00f;
    this->LinkEventResolved = NULL;
}


