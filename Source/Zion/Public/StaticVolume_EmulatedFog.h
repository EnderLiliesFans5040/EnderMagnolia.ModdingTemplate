#pragma once
#include "CoreMinimal.h"
#include "EmulatedFogInterface.h"
#include "EmulatedFogSettings.h"
#include "StaticVolume.h"
#include "StaticVolume_EmulatedFog.generated.h"

class UBoxComponent;

UCLASS(Abstract, Blueprintable)
class AStaticVolume_EmulatedFog : public AStaticVolume, public IEmulatedFogInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FogArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmulatedFogSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOut;
    
public:
    AStaticVolume_EmulatedFog(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

