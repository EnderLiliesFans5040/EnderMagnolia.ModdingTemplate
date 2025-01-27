#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/RichTextBlockDecorator.h"
#include "EInputStyle.h"
#include "InputRichTextBlockImageDecorator.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class UInputRichTextBlockImageDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EInputStyle, UDataTable*> IconSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FallbackBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin FallbackPadding;
    
public:
    UInputRichTextBlockImageDecorator();

};

