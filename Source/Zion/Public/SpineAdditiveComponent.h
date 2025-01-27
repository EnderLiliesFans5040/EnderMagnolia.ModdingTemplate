#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpineAdditiveSettings.h"
#include "SpineAdditiveComponent.generated.h"

class UTrackEntry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpineAdditiveComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAdditiveSettings> AdditiveSettings;
    
public:
    USpineAdditiveComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationStart(UTrackEntry* TrackEntry);
    
};

