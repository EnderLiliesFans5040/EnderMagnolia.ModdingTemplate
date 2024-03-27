#pragma once
#include "CoreMinimal.h"
#include "SpineAnimNotify.h"
#include "SpineAnimNotify_PlayBGM.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, CollapseCategories)
class USpineAnimNotify_PlayBGM : public USpineAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* BGM;
    
public:
    USpineAnimNotify_PlayBGM();

};

