#pragma once
#include "CoreMinimal.h"
#include "IAudioLinkBlueprintInterface.h"
#include "Components/SceneComponent.h"
#include "FMODAudioLinkComponent.generated.h"

class UAudioComponent;
class UFMODAudioLinkSettings;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFMODAudioLinkComponent : public USceneComponent, public IAudioLinkBlueprintInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODAudioLinkSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
public:
    UFMODAudioLinkComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void StopLink() override PURE_VIRTUAL(StopLink,);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkSound(USoundBase* NewSound) override PURE_VIRTUAL(SetLinkSound,);
    
    UFUNCTION(BlueprintCallable)
    void PlayLink(float StartTime) override PURE_VIRTUAL(PlayLink,);
    
    UFUNCTION(BlueprintCallable)
    bool IsLinkPlaying() const override PURE_VIRTUAL(IsLinkPlaying, return false;);
    
};

