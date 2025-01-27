#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EmulatedFogManagerComponent.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UEmulatedFogManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* EmulatedFogMPC;
    
public:
    UEmulatedFogManagerComponent(const FObjectInitializer& ObjectInitializer);

};

