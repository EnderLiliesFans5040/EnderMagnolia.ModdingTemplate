#pragma once
#include "CoreMinimal.h"
#include "UserWidgetZion.h"
#include "UserWidgetPlayTimeClock.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetPlayTimeClock : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlayTimeClock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PlayTimeText;
    
    UUserWidgetPlayTimeClock();

    UFUNCTION(BlueprintCallable)
    void UpdatePlayTime();
    
};

