#pragma once
#include "CoreMinimal.h"
#include "CommandModule.h"
#include "CommandModule_Sound.generated.h"

class UFMODEvent;
class USoundSubsystem;

UCLASS(Blueprintable, EditInlineNew)
class UCommandModule_Sound : public UCommandModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundSubsystem* SoundSubsystem;
    
public:
    UCommandModule_Sound();

};

