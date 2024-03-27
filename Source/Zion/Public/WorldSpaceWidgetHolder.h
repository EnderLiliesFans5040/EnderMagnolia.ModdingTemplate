#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EWidgetReleaseMode.h"
#include "Templates/SubclassOf.h"
#include "WorldSpaceWidgetHolder.generated.h"

class AWorldSpaceWidgetHolder;
class UObject;
class UUserWidgetWorldSpace;
class UWidgetComponent;

UCLASS(Blueprintable)
class AWorldSpaceWidgetHolder : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
public:
    AWorldSpaceWidgetHolder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static AWorldSpaceWidgetHolder* CreateWorldSpaceWidgetHolder(const UObject* WorldObjectContext, const TSubclassOf<UUserWidgetWorldSpace>& UserWidgetWorldSpaceClass, TEnumAsByte<EWidgetReleaseMode> ReleaseMode);
    
};

