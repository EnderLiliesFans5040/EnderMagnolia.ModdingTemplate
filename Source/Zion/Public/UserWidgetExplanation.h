#pragma once
#include "CoreMinimal.h"
#include "RichTextInputElement.h"
#include "UserWidgetZion.h"
#include "UserWidgetExplanation.generated.h"

class URefreshableRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetExplanation : public UUserWidgetZion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URefreshableRichTextBlock* RefreshableRichTextBlock;
    
public:
    UUserWidgetExplanation();

    UFUNCTION(BlueprintCallable)
    void SetExplanationText(const FText& Text, const TArray<FRichTextInputElement>& InputElements, const TArray<FString>& StringElements);
    
};

