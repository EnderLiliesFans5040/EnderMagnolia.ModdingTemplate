#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineAnimNotify_DeactivateAuraFXs.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_DeactivateAuraFXs : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AuraFXTag;
    
public:
    USpineAnimNotify_DeactivateAuraFXs();

};

