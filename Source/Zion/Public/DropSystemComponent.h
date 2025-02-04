#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "DropSystemComponent.generated.h"

class ACollectable_Experience;
class UDropSystemComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=GameModeBase, meta=(BlueprintSpawnableComponent))
class UDropSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACollectable_Experience> CollectableExperienceClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HistoryTime;
    
public:
    UDropSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LaunchExperienceDrop(int32 Experience, const FTransform& Origin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDropSystemComponent* Get(const UObject* WorldContextObject);
    
};

