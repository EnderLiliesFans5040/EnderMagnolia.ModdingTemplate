#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EStencilCategory.h"
#include "SpineHighlightComponent.generated.h"

class UTrackEntry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpineHighlightComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EStencilCategory StencilCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AlternatePivotComputationAnimations;
    
public:
    USpineHighlightComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationStart(UTrackEntry* Entry);
    
};

