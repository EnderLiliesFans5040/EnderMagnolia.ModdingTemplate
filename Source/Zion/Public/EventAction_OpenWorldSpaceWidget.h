#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventAction_SubjectBinding.h"
#include "Templates/SubclassOf.h"
#include "EventAction_OpenWorldSpaceWidget.generated.h"

class UUserWidgetWorldSpace;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_OpenWorldSpaceWidget : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetWorldSpace> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalSpaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToSubject;
    
public:
    UEventAction_OpenWorldSpaceWidget();

};

