#pragma once
#include "CoreMinimal.h"
#include "EActionInputType.h"
#include "EInputType.h"
#include "EUIInputType.h"
#include "InputDescription.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FInputDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIInputType UIInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActionInputType ActionInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InputAction;
    
    ZION_API FInputDescription();
};

