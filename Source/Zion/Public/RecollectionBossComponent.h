#pragma once
#include "CoreMinimal.h"
#include "RecollectionBossBaseComponent.h"
#include "RecollectionBossComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URecollectionBossComponent : public URecollectionBossBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossDeathEndDelay;
    
public:
    URecollectionBossComponent(const FObjectInitializer& ObjectInitializer);

};

