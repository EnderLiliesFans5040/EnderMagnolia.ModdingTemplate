#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineFXData.h"
#include "EPlayerCostumeFX.h"
#include "SpineAnimNotify_CostumeFX.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_CostumeFX : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerCostumeFX CostumeFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineFXData FXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpineFXData RuntimeFXData;
    
public:
    USpineAnimNotify_CostumeFX();

};

