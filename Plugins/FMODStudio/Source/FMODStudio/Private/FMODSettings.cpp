#include "FMODSettings.h"

UFMODSettings::UFMODSettings() {
    this->bLoadAllBanks = true;
    this->bLoadAllSampleData = false;
    this->bEnableLiveUpdate = true;
    this->bEnableEditorLiveUpdate = false;
    this->OutputFormat = EFMODSpeakerMode::Stereo;
    this->OutputType = EFMODOutput::TYPE_AUTODETECT;
    this->Locales.AddDefaulted(2);
    this->Vol0VirtualLevel = 0.00f;
    this->SampleRate = 0;
    this->bMatchHardwareSampleRate = true;
    this->RealChannelCount = 64;
    this->TotalChannelCount = 512;
    this->DSPBufferLength = 0;
    this->DSPBufferCount = 0;
    this->FileBufferSize = 2048;
    this->StudioUpdatePeriod = 0;
    this->bLockAllBuses = false;
    this->LiveUpdatePort = 9264;
    this->EditorLiveUpdatePort = 9265;
    this->ReloadBanksDelay = 5;
    this->bEnableAPIErrorLogging = false;
    this->bEnableMemoryTracking = false;
    this->ContentBrowserPrefix = TEXT("/Game/FMOD/");
    this->MasterBankName = TEXT("Master");
    this->LoggingLevel = LEVEL_NONE;
    this->AmbientVolumeParameter = TEXT("AmbientVolume");
    this->AmbientLPFParameter = TEXT("AmbientLPF");
    this->bFMODAudioLinkEnabled = false;
}


