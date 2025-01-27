#pragma once
#include "CoreMinimal.h"
#include "EmulatedFogInterface.h"
#include "EmulatedFogSettings.h"
#include "StaticVolume_CameraModifier.h"
#include "StaticVolume_Zone.generated.h"

class UPostProcessComponent;
class UWorld;

UCLASS(Blueprintable)
class ZION_API AStaticVolume_Zone : public AStaticVolume_CameraModifier, public IEmulatedFogInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> ZoneLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmulatedFogSettings FogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogDepthMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogDepthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogHeightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogHeightMax;
    
public:
    AStaticVolume_Zone(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetZoneLevel(UWorld* InZoneLevel);
    

    // Fix for true pure virtual functions not being implemented
};

