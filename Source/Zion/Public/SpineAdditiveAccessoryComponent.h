#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpineAdditiveAccessorySettings.h"
#include "SpineAdditiveAccessoryComponent.generated.h"

class UTrackEntry;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpineAdditiveAccessoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAdditiveAccessorySettings> AnimationSettings;
    
public:
    USpineAdditiveAccessoryComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimationStart(UTrackEntry* entry);
    
};

