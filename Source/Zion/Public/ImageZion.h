#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "ImageZionEventDelegate.h"
#include "ImageZion.generated.h"

UCLASS(Blueprintable)
class UImageZion : public UImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageZionEvent OnImageStreamingStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FImageZionEvent OnImageStreamingFinish;
    
public:
    UImageZion();

};

