#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OrientFromInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOrientFromInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationBlendSpeed;
    
public:
    UOrientFromInputComponent(const FObjectInitializer& ObjectInitializer);

};

