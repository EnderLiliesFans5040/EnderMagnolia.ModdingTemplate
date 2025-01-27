#include "BloomBoxGenerationSettings.h"

FBloomBoxGenerationSettings::FBloomBoxGenerationSettings() {
    this->Spread = 0.00f;
    this->Strength = 0.00f;
    this->MaxMipLevel = 0;
    this->MipLevelOffset = 0;
    this->UpSampleTargetMipLevel = 0;
    this->RenderScale = 0.00f;
    this->MeshSubDivision = 0;
    this->EffectMaterial = NULL;
    this->DownSampleMaterial = NULL;
    this->RenderMaterial = NULL;
    this->UpSampleMaterial = NULL;
    this->bUsePremultipliedAlpha = false;
    this->bNoGamma = false;
    this->GammaOverride = 0.00f;
    this->bLinearSpace = false;
    this->bIsPrepassNeeded = false;
}

