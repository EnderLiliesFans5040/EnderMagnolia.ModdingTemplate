#pragma once
#include "CoreMinimal.h"
#include "ActorBindingKey.generated.h"

USTRUCT(BlueprintType)
struct FActorBindingKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    EVENTSYSTEM_API FActorBindingKey();
};
FORCEINLINE uint32 GetTypeHash(const FActorBindingKey) { return 0; }

