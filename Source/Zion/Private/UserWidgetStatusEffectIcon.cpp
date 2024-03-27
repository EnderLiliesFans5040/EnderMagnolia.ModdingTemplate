#include "UserWidgetStatusEffectIcon.h"

UUserWidgetStatusEffectIcon::UUserWidgetStatusEffectIcon() {
    this->StatusEffectDurationSlider = NULL;
}

void UUserWidgetStatusEffectIcon::UpdateRemainingDuration() {
}

TSoftObjectPtr<UPaperSprite> UUserWidgetStatusEffectIcon::GetStatusEffectIconSpriteFromType(const EStatusEffectType& StatusEffectType) const {
    return NULL;
}

TSoftObjectPtr<UPaperSprite> UUserWidgetStatusEffectIcon::GetStatusEffectIconSprite() const {
    return NULL;
}

UStatusEffect* UUserWidgetStatusEffectIcon::GetCachedStatusEffect() const {
    return NULL;
}


