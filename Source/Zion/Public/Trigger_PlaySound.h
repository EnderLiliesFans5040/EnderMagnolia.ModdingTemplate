#pragma once
#include "CoreMinimal.h"
#include "PlaySoundTriggerData.h"
#include "Trigger.h"
#include "Trigger_PlaySound.generated.h"

class UFMODAudioComponent;
class USceneComponent;

UCLASS(Blueprintable)
class ATrigger_PlaySound : public ATrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* AttachSoundSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaySoundTriggerData> SoundEventDataList;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFMODAudioComponent>> AudioInstances;
    
public:
    ATrigger_PlaySound(const FObjectInitializer& ObjectInitializer);

};

