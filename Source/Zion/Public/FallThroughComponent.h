#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IgnoredPlatformData.h"
#include "FallThroughComponent.generated.h"

class AOneWayPlatform;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFallThroughComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIgnoredPlatformData> IgnoredPlatforms;
    
public:
    UFallThroughComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FallThroughOneWayPlatform(AOneWayPlatform* OneWayPlatform);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllIgnoredPlatforms();
    
};

