#pragma once
#include "CoreMinimal.h"
#include "MovementModeData.h"
#include "StaticVolume.h"
#include "StaticVolume_Physics.generated.h"

class APhysicsVolume;

UCLASS(Abstract, Blueprintable)
class AStaticVolume_Physics : public AStaticVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovementModeData MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FluidFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerminalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APhysicsVolume* VirtualPhysicsVolume;
    
public:
    AStaticVolume_Physics(const FObjectInitializer& ObjectInitializer);

};

