#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "Templates/SubclassOf.h"
#include "SpineAnimNotify_CameraShake.generated.h"

class UCameraShakeBase;

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_CameraShake : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientShakeTowardsEpicenter;
    
public:
    USpineAnimNotify_CameraShake();

};

