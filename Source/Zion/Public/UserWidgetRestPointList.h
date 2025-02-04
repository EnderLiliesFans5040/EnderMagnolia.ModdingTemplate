#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapRestPointData.h"
#include "RestPointListData.h"
#include "RestPointListEntryFocusedDelegateDelegate.h"
#include "RestPointListEntryPressedDelegateDelegate.h"
#include "UserWidgetZion.h"
#include "UserWidgetRestPointList.generated.h"

class UUserWidgetMapIcon_RestPoint;
class UUserWidgetRestPointListMapArea;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UUserWidgetRestPointList : public UUserWidgetZion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestPointListEntryFocusedDelegate OnRestPointEntryFocused;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestPointListEntryPressedDelegate OnRestPointEntryPressed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* RestPointListHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidgetRestPointListMapArea> RestPointListMapAreaSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidgetRestPointListMapArea*> RestPointListMapAreas;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRestPointListData> RestPointListData;
    
public:
    UUserWidgetRestPointList();

protected:
    UFUNCTION(BlueprintCallable)
    int32 SetCurrentMapAreaIndex(int32 NewMapAreaIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void RestPointEntryPressed(FMapRestPointData RestPointData);
    
    UFUNCTION(BlueprintCallable)
    void RestPointEntryFocused(int32 MapAreaIndex, UUserWidgetMapIcon_RestPoint* RestPointIcon);
    
public:
    UFUNCTION(BlueprintCallable)
    void Open(const FVector2D& CurrentMapPosition, bool bInstant);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpened(bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed(bool bInstant);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpened() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InstantiateRestPointList(const TArray<FRestPointListData>& ListData);
    
    UFUNCTION(BlueprintCallable)
    void GoToPreviousMapArea();
    
    UFUNCTION(BlueprintCallable)
    void GoToNextMapArea();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GoToMapAreaFromIndex(int32 MapAreaIndex, UUserWidgetMapIcon_RestPoint* NearestRestPointIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNewMapAreaIndex(int32 IndexOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexFromMapAreaName(const FName& MapAreaName) const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidgetMapIcon_RestPoint* FindNearestRestPointIcon(const FVector2D& CurrentMapPosition, int32& OutMapAreaIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void Close(bool bInstant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidgetMapIcon_RestPoint* ChangeMapArea(int32 IndexOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeMapArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeOpened() const;
    
};

