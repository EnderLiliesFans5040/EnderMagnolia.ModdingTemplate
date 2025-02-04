#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFaction.h"
#include "FactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFaction Faction;
    
public:
    UFactionComponent(const FObjectInitializer& ObjectInitializer);

};

