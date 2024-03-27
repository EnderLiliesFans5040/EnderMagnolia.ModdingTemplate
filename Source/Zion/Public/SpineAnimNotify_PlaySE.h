#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SoundData.h"
#include "SpineAnimNotify_PlaySE.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_PlaySE : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData SoundData;
    
public:
    USpineAnimNotify_PlaySE();

};

