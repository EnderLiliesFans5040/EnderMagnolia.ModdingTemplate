#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StoryLevelData.h"
#include "StoryLevelComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerControllerZion, meta=(BlueprintSpawnableComponent))
class UStoryLevelComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StoryLevel;
    
public:
    UStoryLevelComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FStoryLevelData GetStoryLevelData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryLevel() const;
    
};

