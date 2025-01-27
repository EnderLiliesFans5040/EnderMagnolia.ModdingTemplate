#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidgetZionBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetZionBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickWhenPaused;
    
public:
    UUserWidgetZionBase();

};

