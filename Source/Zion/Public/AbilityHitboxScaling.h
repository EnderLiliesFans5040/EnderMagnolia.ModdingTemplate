#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ERenderLayerTypes.h"
#include "AbilityHitbox.h"
#include "AbilityHitboxScaling.generated.h"

class UNiagaraSystem;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AAbilityHitboxScaling : public AAbilityHitbox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ScaleContainer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BeamFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* BeamCollisionFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERenderLayerTypes BeamRenderLayer;
    
public:
    AAbilityHitboxScaling(const FObjectInitializer& ObjectInitializer);

};

