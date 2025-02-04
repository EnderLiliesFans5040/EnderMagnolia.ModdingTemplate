#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticVolume.generated.h"

class UBillboardComponent;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ZION_API AStaticVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
public:
    AStaticVolume(const FObjectInitializer& ObjectInitializer);

};

