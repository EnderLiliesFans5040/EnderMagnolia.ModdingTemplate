#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Widgets/Layout/Anchors.h"
#include "ClearActorData.h"
#include "UserWidgetZion.h"
#include "UserWidgetMapZone.generated.h"

class UUserWidgetMapArea;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ZION_API UUserWidgetMapZone : public UUserWidgetZion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchors CanvasAnchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CanvasAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanvasAutoSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClearActorData ZoneActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ZoneLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidgetMapArea* ParentMapArea;
    
public:
    UUserWidgetMapZone();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnVisitZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideZone();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearZone();
    
};

