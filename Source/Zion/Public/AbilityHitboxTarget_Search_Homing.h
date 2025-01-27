#pragma once
#include "CoreMinimal.h"
#include "AbilityHitboxTarget_Search.h"
#include "AbilityHitboxTarget_Search_Homing.generated.h"

class UHomingComponent;

UCLASS(Abstract, Blueprintable)
class AAbilityHitboxTarget_Search_Homing : public AAbilityHitboxTarget_Search {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHomingComponent* HomingComponent;
    
public:
    AAbilityHitboxTarget_Search_Homing(const FObjectInitializer& ObjectInitializer);

};

