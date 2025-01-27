#pragma once
#include "CoreMinimal.h"
#include "InputBindingData.h"
#include "GameInputSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FGameInputSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputBindingData> BindingsData;
    
    ZION_API FGameInputSettingsData();
};

