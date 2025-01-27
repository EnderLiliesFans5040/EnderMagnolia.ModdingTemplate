#pragma once
#include "CoreMinimal.h"
#include "DialogYesNoDelegateDelegate.h"
#include "UserWidgetZion.h"
#include "UserWidgetDialogYesNo.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetDialogYesNo : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogYesNoDelegate OnYES;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogYesNoDelegate OnNO;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonYES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonNO;
    
public:
    UUserWidgetDialogYesNo();

};

