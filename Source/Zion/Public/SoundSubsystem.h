#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FMODEventInstance.h"
#include "ESoundFamily.h"
#include "SoundSubsystem.generated.h"

class AActor;
class UFMODAudioComponent;
class UFMODEvent;
class USceneComponent;

UCLASS(Blueprintable)
class USoundSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESoundFamily, float> VolumeForSoundFamilies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FFMODEventInstance> SnapshotInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFMODEvent* CurrentBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFMODEventInstance CurrentBGMInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFMODEvent* CurrentAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFMODEventInstance CurrentAmbienceInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFMODEvent* VoiceEvent;
    
public:
    USoundSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopSoundEventInstance(const FFMODEventInstance& SoundInstance);
    
    UFUNCTION(BlueprintCallable)
    void StopBGM(float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAmbience();
    
    UFUNCTION(BlueprintCallable)
    void StopAll();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(ESoundFamily SoundFamily, float NewVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceLanguage(const FString& Locale);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseGameFamilies(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetParameter(FName Parameter, float Value);
    
    UFUNCTION(BlueprintCallable)
    void ResumeFamily(ESoundFamily SoundFamily);
    
    UFUNCTION(BlueprintCallable)
    void ResumeBGM();
    
    UFUNCTION(BlueprintCallable)
    void ResetVolumes();
    
    UFUNCTION(BlueprintCallable)
    void RefreshAudioVolumes();
    
    UFUNCTION(BlueprintCallable)
    UFMODAudioComponent* PlayVoiceOnActor(AActor* Actor, const FString& VoiceID);
    
    UFUNCTION(BlueprintCallable)
    UFMODAudioComponent* PlayVoiceFromText(const FText& Text, AActor* Speaker);
    
    UFUNCTION(BlueprintCallable)
    UFMODAudioComponent* PlayVoice(const FString& VoiceID);
    
    UFUNCTION(BlueprintCallable)
    FFMODEventInstance PlaySoundEventAtWorldLocation(UFMODEvent* SoundEvent, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    UFMODAudioComponent* PlaySoundEventAttached(UFMODEvent* SoundEvent, USceneComponent* AttachToComponent);
    
    UFUNCTION(BlueprintCallable)
    FFMODEventInstance PlaySoundEvent(UFMODEvent* SoundEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM(UFMODEvent* SoundEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayAmbience(UFMODEvent* SoundEvent);
    
    UFUNCTION(BlueprintCallable)
    void PauseFamily(ESoundFamily SoundFamily);
    
    UFUNCTION(BlueprintCallable)
    void PauseBGM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolume(ESoundFamily SoundFamily) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVoiceLanguage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetCurrentBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetCurrentAmbience() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSnapshot(UFMODEvent* Snapshot, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void DisableSnapshot(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void DisableAllSnapshots();
    
};

