#pragma once
#include "CoreMinimal.h"
#include "DeathProcess_Dissolve.h"
#include "SpineAnimationDefinition.h"
#include "DeathProcess_Enemy.generated.h"

UCLASS(Abstract, Blueprintable)
class UDeathProcess_Enemy : public UDeathProcess_Dissolve {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> DeathAnimations;
    
public:
    UDeathProcess_Enemy();

};

