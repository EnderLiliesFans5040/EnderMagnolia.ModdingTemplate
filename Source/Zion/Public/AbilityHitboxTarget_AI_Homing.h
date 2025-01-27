#pragma once
#include "CoreMinimal.h"
#include "AbilityHitboxTarget_AI.h"
#include "AbilityHitboxTarget_AI_Homing.generated.h"

class UHomingComponent;

UCLASS(Abstract, Blueprintable)
class AAbilityHitboxTarget_AI_Homing : public AAbilityHitboxTarget_AI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHomingComponent* HomingComponent;
    
public:
    AAbilityHitboxTarget_AI_Homing(const FObjectInitializer& ObjectInitializer);

};

