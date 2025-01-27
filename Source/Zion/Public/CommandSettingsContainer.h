#pragma once
#include "CoreMinimal.h"
#include "CommandSettings.h"
#include "CommandSettingsContainer.generated.h"

class UCommandSet;

USTRUCT(BlueprintType)
struct FCommandSettingsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandSettings CommandSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandSet* CommandSet;
    
    ZION_API FCommandSettingsContainer();
};

