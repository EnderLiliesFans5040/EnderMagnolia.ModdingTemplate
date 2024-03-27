#include "FMODPlatformSettings.h"

FFMODPlatformSettings::FFMODPlatformSettings() {
    this->RealChannelCount = 0;
    this->SampleRate = 0;
    this->SpeakerMode = EFMODSpeakerMode::Stereo;
    this->OutputType = EFMODOutput::TYPE_AUTODETECT;
    this->CustomPoolSize = 0;
}

