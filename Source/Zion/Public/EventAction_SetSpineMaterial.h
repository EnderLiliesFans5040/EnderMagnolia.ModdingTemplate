#pragma once
#include "CoreMinimal.h"
#include "EventAction_SubjectBinding.h"
#include "EventAction_SetSpineMaterial.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class UEventAction_SetSpineMaterial : public UEventAction_SubjectBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
public:
    UEventAction_SetSpineMaterial();

};

