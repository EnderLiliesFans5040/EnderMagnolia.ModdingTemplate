#pragma once
#include "CoreMinimal.h"
#include "CommandCondition.h"
#include "EAptitudeType.h"
#include "CommandCondition_HasAptitude.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ZION_API UCommandCondition_HasAptitude : public UCommandCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAptitudeType> Aptitudes;
    
public:
    UCommandCondition_HasAptitude();

};

