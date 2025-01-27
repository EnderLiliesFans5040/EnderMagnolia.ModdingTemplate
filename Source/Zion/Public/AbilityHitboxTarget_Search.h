#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AbilityHitboxTarget.h"
#include "AbilityHitboxTarget_Search.generated.h"

UCLASS(Abstract, Blueprintable)
class AAbilityHitboxTarget_Search : public AAbilityHitboxTarget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrontCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> VisibilityChannel;
    
public:
    AAbilityHitboxTarget_Search(const FObjectInitializer& ObjectInitializer);

};

