#pragma once
#include "CoreMinimal.h"
#include "EUIInputType.h"
#include "UIBinding.h"
#include "UIInputSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FUIInputSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUIInputType, FUIBinding> Bindings;
    
    ZION_API FUIInputSettingsData();
};

