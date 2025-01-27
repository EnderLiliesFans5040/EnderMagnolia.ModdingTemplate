#pragma once
#include "CoreMinimal.h"
#include "UserWidgetZion.h"
#include "UserWidgetLowHPFeedback.generated.h"

class AActor;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetLowHPFeedback : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Visual;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpSpeed;
    
public:
    UUserWidgetLowHPFeedback();

    UFUNCTION(BlueprintCallable)
    void BindToActor(AActor* Actor);
    
};

