#pragma once
#include "CoreMinimal.h"
#include "EUMGLayer.h"
#include "FadeParameters.h"
#include "Templates/SubclassOf.h"
#include "FadeDescriptionData.generated.h"

class UUserWidgetFade;

USTRUCT(BlueprintType)
struct FFadeDescriptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetFade> FadeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFadeParameters FadeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUMGLayer Layer;
    
    ZION_API FFadeDescriptionData();
};

