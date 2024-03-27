#pragma once
#include "CoreMinimal.h"
#include "RootMotionFinishVelocitySettingsBP.h"
#include "RootMotionSettings.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionFinishVelocitySettingsBP FinishSettings;
    
    SPINEEXTENSION_API FRootMotionSettings();
};

