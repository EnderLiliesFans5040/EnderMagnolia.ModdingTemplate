#pragma once
#include "CoreMinimal.h"
#include "ActorBindingSpawnInfos.h"
#include "EActorBindingType.h"
#include "ActorBinding.generated.h"

USTRUCT(BlueprintType)
struct FActorBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EActorBindingType ActorBindingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorBindingSpawnInfos SpawnInfos;
    
    EVENTSYSTEM_API FActorBinding();
};

