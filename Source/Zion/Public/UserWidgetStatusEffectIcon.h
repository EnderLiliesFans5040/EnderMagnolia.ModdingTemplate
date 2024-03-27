#pragma once
#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "UserWidgetZion.h"
#include "UserWidgetStatusEffectIcon.generated.h"

class UPaperSprite;
class URadialSlider;
class UStatusEffect;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetStatusEffectIcon : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadialSlider* StatusEffectDurationSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UStatusEffect> CachedStatusEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStatusEffectType, TSoftObjectPtr<UPaperSprite>> StatusEffectIcons_Map;
    
public:
    UUserWidgetStatusEffectIcon();

    UFUNCTION(BlueprintCallable)
    void UpdateRemainingDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UPaperSprite> GetStatusEffectIconSpriteFromType(const EStatusEffectType& StatusEffectType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UPaperSprite> GetStatusEffectIconSprite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStatusEffect* GetCachedStatusEffect() const;
    
};

