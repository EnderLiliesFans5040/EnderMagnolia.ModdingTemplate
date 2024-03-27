#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CommandSettings.h"
#include "CommandSettingsData.generated.h"

UCLASS(Blueprintable)
class UCommandSettingsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandSettings CommandSettings;
    
    UCommandSettingsData();

};

