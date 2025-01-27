#pragma once
#include "CoreMinimal.h"
#include "RichTextInputElement.h"
#include "FooterData.generated.h"

USTRUCT(BlueprintType)
struct FFooterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichTextInputElement InputElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    ZION_API FFooterData();
};

