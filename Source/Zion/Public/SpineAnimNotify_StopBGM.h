#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineAnimNotify_StopBGM.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_StopBGM : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOut;
    
public:
    USpineAnimNotify_StopBGM();

};

