#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UIBinding.generated.h"

USTRUCT(BlueprintType)
struct FUIBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> KeyBindings;
    
    ZION_API FUIBinding();
};

