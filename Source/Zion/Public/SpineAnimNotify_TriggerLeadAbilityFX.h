#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineFXData.h"
#include "SpineAnimNotify_TriggerLeadAbilityFX.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_TriggerLeadAbilityFX : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLeadAbilityFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData LeadAbilityFXDataOverride;
    
public:
    USpineAnimNotify_TriggerLeadAbilityFX();

};

