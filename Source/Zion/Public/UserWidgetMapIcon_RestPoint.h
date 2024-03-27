#pragma once
#include "CoreMinimal.h"
#include "MapRestPointData.h"
#include "UserWidgetMapIcon_Actor.h"
#include "UserWidgetMapIcon_RestPoint.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapIcon_RestPoint : public UUserWidgetMapIcon_Actor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapRestPointData RestPointData;
    
public:
    UUserWidgetMapIcon_RestPoint();

    UFUNCTION(BlueprintCallable)
    void SetRestPointData(const FMapRestPointData& InRestPointData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMapRestPointData GetRestPointData() const;
    
};

