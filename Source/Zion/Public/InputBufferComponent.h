#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimedInputSnapshot.h"
#include "InputBufferComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class ZION_API UInputBufferComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBufferTime;
    
public:
    UInputBufferComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInputSnapshotCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimedInputSnapshot GetInputSnapshotAtIndex(int32 Index) const;
    
};

