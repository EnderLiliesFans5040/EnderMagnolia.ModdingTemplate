#pragma once
#include "CoreMinimal.h"
#include "AudioVolumeSettings.h"
#include "GameplayConditionChecker.h"
#include "StaticVolume.h"
#include "StaticVolume_Audio.generated.h"

class AFMODAmbientSound;

UCLASS(Abstract, Blueprintable)
class AStaticVolume_Audio : public AStaticVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker ConditionChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioVolumeSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioVolumeSettings ConditionsFailedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFMODAmbientSound*> AdditionalSounds;
    
public:
    AStaticVolume_Audio(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfiniteExtent() const;
    
};

