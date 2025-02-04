#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineAnimNotify_ActivateAuraFXs.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_ActivateAuraFXs : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AuraFXTag;
    
public:
    USpineAnimNotify_ActivateAuraFXs();

};

