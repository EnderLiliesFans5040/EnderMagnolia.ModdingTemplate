#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "DeathProcess.h"
#include "DeathProcess_Dissolve.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class UDeathProcess_Dissolve : public UDeathProcess {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DissolveCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponents;
    
public:
    UDeathProcess_Dissolve();

};

