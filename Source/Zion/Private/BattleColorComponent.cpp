#include "BattleColorComponent.h"

UBattleColorComponent::UBattleColorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeInCurve = NULL;
    this->FadeOutCurve = NULL;
    this->MaterialParameterName = TEXT("FadeAlpha");
    this->bEnableBattleColorOnStart = false;
}

void UBattleColorComponent::SetBattleColorEnabled(bool bEnable) {
}

void UBattleColorComponent::SetAlpha(float NewAlpha) {
}


