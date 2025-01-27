#pragma once
#include "CoreMinimal.h"
#include "EventBlackboardInit.h"
#include "GameplayConditionChecker.h"
#include "EventData.generated.h"

class AActor;
class ASpawner;
class UEventAsset;

USTRUCT(BlueprintType)
struct FEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayConditionChecker Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEventAsset> EventAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, AActor*> ActorBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, ASpawner*> SpawnerBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventBlackboardInit DefaultEventValues;
    
    ZION_API FEventData();
};

