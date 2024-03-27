#pragma once
#include "CoreMinimal.h"
#include "EAptitudeType.h"
#include "GameplayCondition.h"
#include "GameplayCondition_HasAptitude.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameplayCondition_HasAptitude : public UGameplayCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAptitudeType Aptitude;
    
public:
    UGameplayCondition_HasAptitude();

};

