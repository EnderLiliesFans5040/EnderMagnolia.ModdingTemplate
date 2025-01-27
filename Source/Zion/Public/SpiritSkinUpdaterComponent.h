#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAptitudeType.h"
#include "SpiritSkinUpdaterComponent.generated.h"

class USpineSkeletonAnimationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpiritSkinUpdaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAptitudeType NecessaryAptitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Skins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* AnimationComponent;
    
public:
    USpiritSkinUpdaterComponent(const FObjectInitializer& ObjectInitializer);

};

