#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TargetChangeDelegateDelegate.h"
#include "TargetChangeNotifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTargetChangeNotifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetChangeDelegate OnTargetChanged;
    
    UTargetChangeNotifierComponent(const FObjectInitializer& ObjectInitializer);

};

