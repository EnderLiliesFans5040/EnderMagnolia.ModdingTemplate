#pragma once
#include "CoreMinimal.h"
#include "AbilityHitboxScaling.h"
#include "AbilityHitboxScaling_OrientToTargetAI.generated.h"

class UOrientToTargetComponent;

UCLASS(Abstract, Blueprintable)
class AAbilityHitboxScaling_OrientToTargetAI : public AAbilityHitboxScaling {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOrientToTargetComponent* OrientToTargetComponent;
    
public:
    AAbilityHitboxScaling_OrientToTargetAI(const FObjectInitializer& ObjectInitializer);

};

