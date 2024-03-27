#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StoryEventMarkerLocation.generated.h"

UCLASS(Abstract, Blueprintable)
class ZION_API AStoryEventMarkerLocation : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveStoryLevels;
    
public:
    AStoryEventMarkerLocation(const FObjectInitializer& ObjectInitializer);

};

