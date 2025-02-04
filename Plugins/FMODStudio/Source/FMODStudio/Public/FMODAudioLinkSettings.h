#pragma once
#include "CoreMinimal.h"
#include "AudioLinkSettingsAbstract.h"
#include "FMODAudioLinkSettings.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, DefaultConfig, EditInlineNew, Config=Engine)
class FMODSTUDIO_API UFMODAudioLinkSettings : public UAudioLinkSettingsAbstract {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFMODEvent> LinkEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldClearBufferOnReceipt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProducerToConsumerBufferRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSilenceFillRatio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFMODEvent* LinkEventResolved;
    
public:
    UFMODAudioLinkSettings();

};

