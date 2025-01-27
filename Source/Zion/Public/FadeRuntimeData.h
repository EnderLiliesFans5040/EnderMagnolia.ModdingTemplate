#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FadeRuntimeData.generated.h"

class UUserWidgetFade;

USTRUCT(BlueprintType)
struct FFadeRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UUserWidgetFade>, TWeakObjectPtr<UUserWidgetFade>> InstanceForFadeClasses;
    
    ZION_API FFadeRuntimeData();
};

