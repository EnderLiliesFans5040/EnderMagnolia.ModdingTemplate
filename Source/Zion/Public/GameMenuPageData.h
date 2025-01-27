#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameMenuPageData.generated.h"

class UUserWidgetGameMenu_Page;

USTRUCT(BlueprintType)
struct FGameMenuPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidgetGameMenu_Page> PageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidgetGameMenu_Page* PageInstance;
    
    ZION_API FGameMenuPageData();
};

