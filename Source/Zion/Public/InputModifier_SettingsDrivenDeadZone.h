#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "InputModifiers.h"
#include "EInputStick.h"
#include "InputModifier_SettingsDrivenDeadZone.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UInputModifier_SettingsDrivenDeadZone : public UInputModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeadZoneType Type;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputStick DeadZoneStick;
    
    UInputModifier_SettingsDrivenDeadZone();

};

