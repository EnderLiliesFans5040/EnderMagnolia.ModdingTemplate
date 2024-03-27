#include "SpiritSummonParameters.h"

FSpiritSummonParameters::FSpiritSummonParameters() {
    this->SummonLocationType = ESpiritSummonLocationType::Reset;
    this->bUseLocationResetFallback = false;
    this->DistanceForLocationResetFallback = 0.00f;
    this->SummonRotationType = ESpiritSummonRotationType::Keep;
    this->AbsoluteFacing = EFacingType::None;
    this->bCheckLocationValidityWithLinecast = false;
    this->bSnapToGround = false;
    this->AttachType = ESpiritAttachType::None;
    this->AttachmentRule = EAttachmentRule::KeepRelative;
    this->DetachType = ESpiritDetachType::OnDeactivate;
    this->SummonType = ESpiritSummonType::AlwaysSummon;
    this->DismissType = ESpiritDismissType::Manual;
    this->bInstantSummon = false;
}

