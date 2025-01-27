#pragma once
#include "CoreMinimal.h"
#include "RichTextInputElement.h"
#include "InventoryItemUpgradeInfo.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemUpgradeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UpgradeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRichTextInputElement> UpgradeTextFormatElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UpgradeTextStringElements;
    
    ZION_API FInventoryItemUpgradeInfo();
};

