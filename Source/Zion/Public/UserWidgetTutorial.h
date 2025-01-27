#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TutorialWidgetClosedDelegateDelegate.h"
#include "UserWidgetZion.h"
#include "UserWidgetTutorial.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUserWidgetTutorial : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialWidgetClosedDelegate OnClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TutorialDataHandle;
    
public:
    UUserWidgetTutorial();

};

