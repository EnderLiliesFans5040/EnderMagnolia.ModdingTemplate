#pragma once
#include "CoreMinimal.h"
#include "EInputStyle.h"
#include "GameInputSettingsData.h"
#include "UIInputSettingsData.h"
#include "InputSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FInputSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameInputSettingsData GameInputSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIInputSettingsData UIInputSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputStyle InputStyleGamepadOverride;
    
    ZION_API FInputSettingsData();
};

