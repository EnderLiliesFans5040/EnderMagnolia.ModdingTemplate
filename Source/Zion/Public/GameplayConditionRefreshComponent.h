#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConditionRefreshDelegateDelegate.h"
#include "GameplayConditionRefreshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameplayConditionRefreshComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditionRefreshDelegate OnRefreshRequestedDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRefresh;
    
public:
    UGameplayConditionRefreshComponent(const FObjectInitializer& ObjectInitializer);

};

