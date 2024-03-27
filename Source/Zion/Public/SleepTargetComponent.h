#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SleepTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USleepTargetComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBePutToSleep;
    
public:
    USleepTargetComponent(const FObjectInitializer& ObjectInitializer);

};

