#pragma once
#include "CoreMinimal.h"
#include "GameplayCameraOverrideSettings.generated.h"

class UCameraOverrideModule;

USTRUCT(BlueprintType)
struct FGameplayCameraOverrideSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCameraOverrideModule*> OverrideSettings;
    
public:
    ZION_API FGameplayCameraOverrideSettings();
};

