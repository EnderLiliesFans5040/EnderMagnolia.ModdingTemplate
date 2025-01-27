#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClearActorData.h"
#include "UserWidgetMapIcon.h"
#include "UserWidgetMapIcon_Actor.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapIcon_Actor : public UUserWidgetMapIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClearActorData ActorData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCachedWidgetSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CachedWidgetSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideClearFogOfWarSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ClearFogOfWarPositionOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ClearFogOfWarSizeOverride;
    
public:
    UUserWidgetMapIcon_Actor();

    UFUNCTION(BlueprintCallable)
    void SetActorData(const FClearActorData& InActorData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FClearActorData GetActorData() const;
    
};

