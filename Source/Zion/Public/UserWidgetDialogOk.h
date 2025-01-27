#pragma once
#include "CoreMinimal.h"
#include "DialogOkDelegateDelegate.h"
#include "UserWidgetZion.h"
#include "UserWidgetDialogOk.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetDialogOk : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogOkDelegate OnOK;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonOK;
    
public:
    UUserWidgetDialogOk();

};

