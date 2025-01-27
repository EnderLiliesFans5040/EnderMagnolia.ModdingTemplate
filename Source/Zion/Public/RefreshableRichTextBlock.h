#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlock.h"
#include "ERichTextDecoratorMode.h"
#include "RichTextInputElement.h"
#include "RefreshableRichTextBlock.generated.h"

UCLASS(Blueprintable)
class URefreshableRichTextBlock : public URichTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERichTextDecoratorMode DecoratorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Format;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRichTextInputElement> FormatElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> FormatStrings;
    
public:
    URefreshableRichTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetupAndRefresh(const FText& NewFormat, const TArray<FRichTextInputElement>& NewFormatElements, const TArray<FString>& NewStringElements);
    
    UFUNCTION(BlueprintCallable)
    void SetFormatElements(const TArray<FRichTextInputElement>& NewFormatElements, const TArray<FString>& NewStringElements);
    
    UFUNCTION(BlueprintCallable)
    void SetFormat(const FText& NewFormat);
    
    UFUNCTION(BlueprintCallable)
    void SetDecoratorMode(ERichTextDecoratorMode NewDecoratorMode);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRichTextInputElement> GetFormatElements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERichTextDecoratorMode GetDecoratorMode() const;
    
};

