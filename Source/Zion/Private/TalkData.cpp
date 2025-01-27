#include "TalkData.h"

FTalkData::FTalkData() {
    this->bOverrideSpeakerName = false;
    this->bOverrideSpeakerAnimationDefinitions = false;
    this->TalkDesign = ETalkDesign::Arrow;
    this->bAutoComplete = false;
    this->AutoCompleteTime = 0.00f;
}

