#pragma once
#include "CoreMinimal.h"
#include "CameraOverrideModule.h"
#include "CameraOverrideModule_SettingsEaseOutExp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCameraOverrideModule_SettingsEaseOutExp : public UCameraOverrideModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SettingsEaseOutExp;
    
public:
    UCameraOverrideModule_SettingsEaseOutExp();

};

